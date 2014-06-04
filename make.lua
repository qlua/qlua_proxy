out_file=io.open("qlua_proxy.cpp", "w+t")
assert (out_file)
print("Parsing temp_qlua.def...")
out_file:write("LIBRARY \"qlua_proxy\"\nEXPORTS\n")
local counter =1
for line in io.lines("temp_qlua.def") do
	out_file:write(string.format("%s\t=\t_%s\t@%.0d\n", line, line, counter))
	counter = counter +1
end
out_file:close()
print("Writing header ...")
out_file = io.open("qlua_proxy.cpp", "w+t")
assert(out_file)
out_file:write([[#define APP_NAME	"QLUA PROXY"
#define APP_VERSION	"1.0"

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

struct qlua_dll
{
	HMODULE dll;]])

out_file:write("\n")

print("Writing sructure definition ...")
for line in io.lines("temp_qlua.def") do
	out_file:write(string.format("\tFARPROC _%s;\n", line))
end
out_file:write("\n}qlua;\n")

print("Writing stub function definition ...")
for line in io.lines("temp_qlua.def") do
	out_file:write(string.format("__declspec(naked) void %s(){_asm { jmp [qlua._%s] }}\n", line, line))
end
out_file:write("\n")
print("Writing ddlmain ...")
out_file:write([[BOOL APIENTRY DllMain( HMODULE hModule,
					   DWORD  ul_reason_for_call,
					   LPVOID lpReserved
					 )
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		qlua.dll = LoadLibrary("qlua.dll");
		if (qlua.dll == false)
		{
			MessageBox(0, "Cannot load original qlua.dll library", APP_NAME, MB_ICONERROR);
			ExitProcess(0);
		}
]])

for line in io.lines("temp_qlua.def") do
	out_file:write(string.format("\t\tqlua._%s = GetProcAddress(qlua.dll, \"%s\");\n\t", line, line))
end

out_file:write([[break;
	case DLL_PROCESS_DETACH:
		break;
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
		break;
	}
	return TRUE;
}]])

out_file:close()
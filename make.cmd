
@echo off
@echo clean up...
del /F /Q qlua_proxy\Release\*.*
SET MSBUILDDISABLENODEREUSE=1 
@call "C:\Program Files (x86)\Microsoft Visual Studio 10.0\VC\bin\vcvars32.bat"  1>NUL: 
@echo generate def-file ..
@dumpbin /exports qlua.dll |grep -E "luaopen|lua_|lua[A-Z]_"|sed -e "s/^.*lua/lua/" >temp_qlua.def
@echo generate cpp_file
lua make.lua
@echo builing ...
@echo LIBRARY "qlua_proxy" >qlua.def
@echo EXPORTS >>qlua.def
@type temp_qlua.def >>qlua.def
copy /Y qlua.def qlua_proxy\qlua.def
copy /Y qlua_proxy.cpp qlua_proxy\dllmain.cpp
del /Q *.def
del /Q *.cpp
"C:\Program Files (x86)\Microsoft Visual Studio 10.0\Common7\IDE\devenv.com" qlua_proxy.sln /build Release /project qlua_proxy
copy Release\qlua_proxy.dll Release\lua5.1.dll

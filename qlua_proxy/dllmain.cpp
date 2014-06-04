#define APP_NAME	"QLUA PROXY"
#define APP_VERSION	"1.0"

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

struct qlua_dll
{
	HMODULE dll;
	FARPROC _luaA_pushobject;
	FARPROC _luaC_barrierback;
	FARPROC _luaC_barrierf;
	FARPROC _luaC_callGCTM;
	FARPROC _luaC_freeall;
	FARPROC _luaC_fullgc;
	FARPROC _luaC_link;
	FARPROC _luaC_linkupval;
	FARPROC _luaC_separateudata;
	FARPROC _luaC_step;
	FARPROC _luaD_call;
	FARPROC _luaD_callhook;
	FARPROC _luaD_growstack;
	FARPROC _luaD_pcall;
	FARPROC _luaD_poscall;
	FARPROC _luaD_precall;
	FARPROC _luaD_protectedparser;
	FARPROC _luaD_rawrunprotected;
	FARPROC _luaD_reallocCI;
	FARPROC _luaD_reallocstack;
	FARPROC _luaD_seterrorobj;
	FARPROC _luaD_throw;
	FARPROC _luaE_freethread;
	FARPROC _luaE_newthread;
	FARPROC _luaF_close;
	FARPROC _luaF_findupval;
	FARPROC _luaF_freeclosure;
	FARPROC _luaF_freeproto;
	FARPROC _luaF_freeupval;
	FARPROC _luaF_getlocalname;
	FARPROC _luaF_newCclosure;
	FARPROC _luaF_newLclosure;
	FARPROC _luaF_newproto;
	FARPROC _luaF_newupval;
	FARPROC _luaG_aritherror;
	FARPROC _luaG_checkcode;
	FARPROC _luaG_checkopenop;
	FARPROC _luaG_concaterror;
	FARPROC _luaG_errormsg;
	FARPROC _luaG_ordererror;
	FARPROC _luaG_runerror;
	FARPROC _luaG_typeerror;
	FARPROC _luaH_free;
	FARPROC _luaH_get;
	FARPROC _luaH_getn;
	FARPROC _luaH_getnum;
	FARPROC _luaH_getstr;
	FARPROC _luaH_new;
	FARPROC _luaH_next;
	FARPROC _luaH_resizearray;
	FARPROC _luaH_set;
	FARPROC _luaH_setnum;
	FARPROC _luaH_setstr;
	FARPROC _luaK_checkstack;
	FARPROC _luaK_codeABC;
	FARPROC _luaK_codeABx;
	FARPROC _luaK_concat;
	FARPROC _luaK_dischargevars;
	FARPROC _luaK_exp2RK;
	FARPROC _luaK_exp2anyreg;
	FARPROC _luaK_exp2nextreg;
	FARPROC _luaK_exp2val;
	FARPROC _luaK_fixline;
	FARPROC _luaK_getlabel;
	FARPROC _luaK_goiftrue;
	FARPROC _luaK_indexed;
	FARPROC _luaK_infix;
	FARPROC _luaK_jump;
	FARPROC _luaK_nil;
	FARPROC _luaK_numberK;
	FARPROC _luaK_patchlist;
	FARPROC _luaK_patchtohere;
	FARPROC _luaK_posfix;
	FARPROC _luaK_prefix;
	FARPROC _luaK_reserveregs;
	FARPROC _luaK_ret;
	FARPROC _luaK_self;
	FARPROC _luaK_setlist;
	FARPROC _luaK_setoneret;
	FARPROC _luaK_setreturns;
	FARPROC _luaK_storevar;
	FARPROC _luaK_stringK;
	FARPROC _luaL_addlstring;
	FARPROC _luaL_addstring;
	FARPROC _luaL_addvalue;
	FARPROC _luaL_argerror;
	FARPROC _luaL_buffinit;
	FARPROC _luaL_callmeta;
	FARPROC _luaL_checkany;
	FARPROC _luaL_checkinteger;
	FARPROC _luaL_checklstring;
	FARPROC _luaL_checknumber;
	FARPROC _luaL_checkoption;
	FARPROC _luaL_checkstack;
	FARPROC _luaL_checktype;
	FARPROC _luaL_checkudata;
	FARPROC _luaL_error;
	FARPROC _luaL_findtable;
	FARPROC _luaL_getmetafield;
	FARPROC _luaL_gsub;
	FARPROC _luaL_loadbuffer;
	FARPROC _luaL_loadfile;
	FARPROC _luaL_loadstring;
	FARPROC _luaL_newmetatable;
	FARPROC _luaL_newstate;
	FARPROC _luaL_openlib;
	FARPROC _luaL_openlibs;
	FARPROC _luaL_optinteger;
	FARPROC _luaL_optlstring;
	FARPROC _luaL_optnumber;
	FARPROC _luaL_prepbuffer;
	FARPROC _luaL_pushresult;
	FARPROC _luaL_ref;
	FARPROC _luaL_register;
	FARPROC _luaL_typerror;
	FARPROC _luaL_unref;
	FARPROC _luaL_where;
	FARPROC _luaM_growaux_;
	FARPROC _luaM_realloc_;
	FARPROC _luaM_toobig;
	FARPROC _luaO_chunkid;
	FARPROC _luaO_fb2int;
	FARPROC _luaO_int2fb;
	FARPROC _luaO_log2;
	FARPROC _luaO_pushfstring;
	FARPROC _luaO_pushvfstring;
	FARPROC _luaO_rawequalObj;
	FARPROC _luaO_str2d;
	FARPROC _luaS_newlstr;
	FARPROC _luaS_newudata;
	FARPROC _luaS_resize;
	FARPROC _luaT_gettm;
	FARPROC _luaT_gettmbyobj;
	FARPROC _luaT_init;
	FARPROC _luaU_dump;
	FARPROC _luaU_header;
	FARPROC _luaU_undump;
	FARPROC _luaV_concat;
	FARPROC _luaV_equalval;
	FARPROC _luaV_execute;
	FARPROC _luaV_gettable;
	FARPROC _luaV_lessthan;
	FARPROC _luaV_settable;
	FARPROC _luaV_tonumber;
	FARPROC _luaV_tostring;
	FARPROC _luaX_init;
	FARPROC _luaX_lexerror;
	FARPROC _luaX_lookahead;
	FARPROC _luaX_newstring;
	FARPROC _luaX_next;
	FARPROC _luaX_setinput;
	FARPROC _luaX_syntaxerror;
	FARPROC _luaX_token2str;
	FARPROC _luaY_parser;
	FARPROC _luaZ_fill;
	FARPROC _luaZ_init;
	FARPROC _luaZ_lookahead;
	FARPROC _luaZ_openspace;
	FARPROC _luaZ_read;
	FARPROC _lua_atpanic;
	FARPROC _lua_call;
	FARPROC _lua_checkstack;
	FARPROC _lua_close;
	FARPROC _lua_concat;
	FARPROC _lua_cpcall;
	FARPROC _lua_createtable;
	FARPROC _lua_dump;
	FARPROC _lua_equal;
	FARPROC _lua_error;
	FARPROC _lua_gc;
	FARPROC _lua_getallocf;
	FARPROC _lua_getfenv;
	FARPROC _lua_getfield;
	FARPROC _lua_gethook;
	FARPROC _lua_gethookcount;
	FARPROC _lua_gethookmask;
	FARPROC _lua_getinfo;
	FARPROC _lua_getlocal;
	FARPROC _lua_getmetatable;
	FARPROC _lua_getstack;
	FARPROC _lua_gettable;
	FARPROC _lua_gettop;
	FARPROC _lua_getupvalue;
	FARPROC _lua_insert;
	FARPROC _lua_iscfunction;
	FARPROC _lua_isnumber;
	FARPROC _lua_isstring;
	FARPROC _lua_isuserdata;
	FARPROC _lua_lessthan;
	FARPROC _lua_load;
	FARPROC _lua_newstate;
	FARPROC _lua_newthread;
	FARPROC _lua_newuserdata;
	FARPROC _lua_next;
	FARPROC _lua_objlen;
	FARPROC _lua_pcall;
	FARPROC _lua_pushboolean;
	FARPROC _lua_pushcclosure;
	FARPROC _lua_pushfstring;
	FARPROC _lua_pushinteger;
	FARPROC _lua_pushlightuserdata;
	FARPROC _lua_pushlstring;
	FARPROC _lua_pushnil;
	FARPROC _lua_pushnumber;
	FARPROC _lua_pushstring;
	FARPROC _lua_pushthread;
	FARPROC _lua_pushvalue;
	FARPROC _lua_pushvfstring;
	FARPROC _lua_rawequal;
	FARPROC _lua_rawget;
	FARPROC _lua_rawgeti;
	FARPROC _lua_rawset;
	FARPROC _lua_rawseti;
	FARPROC _lua_remove;
	FARPROC _lua_replace;
	FARPROC _lua_resume;
	FARPROC _lua_setallocf;
	FARPROC _lua_setfenv;
	FARPROC _lua_setfield;
	FARPROC _lua_sethook;
	FARPROC _lua_setlevel;
	FARPROC _lua_setlocal;
	FARPROC _lua_setmetatable;
	FARPROC _lua_settable;
	FARPROC _lua_settop;
	FARPROC _lua_setupvalue;
	FARPROC _lua_status;
	FARPROC _lua_toboolean;
	FARPROC _lua_tocfunction;
	FARPROC _lua_tointeger;
	FARPROC _lua_tolstring;
	FARPROC _lua_tonumber;
	FARPROC _lua_topointer;
	FARPROC _lua_tothread;
	FARPROC _lua_touserdata;
	FARPROC _lua_type;
	FARPROC _lua_typename;
	FARPROC _lua_xmove;
	FARPROC _lua_yield;
	FARPROC _luaopen_base;
	FARPROC _luaopen_bit;
	FARPROC _luaopen_debug;
	FARPROC _luaopen_io;
	FARPROC _luaopen_math;
	FARPROC _luaopen_os;
	FARPROC _luaopen_package;
	FARPROC _luaopen_string;
	FARPROC _luaopen_table;

}qlua;
__declspec(naked) void luaA_pushobject(){_asm { jmp [qlua._luaA_pushobject] }}
__declspec(naked) void luaC_barrierback(){_asm { jmp [qlua._luaC_barrierback] }}
__declspec(naked) void luaC_barrierf(){_asm { jmp [qlua._luaC_barrierf] }}
__declspec(naked) void luaC_callGCTM(){_asm { jmp [qlua._luaC_callGCTM] }}
__declspec(naked) void luaC_freeall(){_asm { jmp [qlua._luaC_freeall] }}
__declspec(naked) void luaC_fullgc(){_asm { jmp [qlua._luaC_fullgc] }}
__declspec(naked) void luaC_link(){_asm { jmp [qlua._luaC_link] }}
__declspec(naked) void luaC_linkupval(){_asm { jmp [qlua._luaC_linkupval] }}
__declspec(naked) void luaC_separateudata(){_asm { jmp [qlua._luaC_separateudata] }}
__declspec(naked) void luaC_step(){_asm { jmp [qlua._luaC_step] }}
__declspec(naked) void luaD_call(){_asm { jmp [qlua._luaD_call] }}
__declspec(naked) void luaD_callhook(){_asm { jmp [qlua._luaD_callhook] }}
__declspec(naked) void luaD_growstack(){_asm { jmp [qlua._luaD_growstack] }}
__declspec(naked) void luaD_pcall(){_asm { jmp [qlua._luaD_pcall] }}
__declspec(naked) void luaD_poscall(){_asm { jmp [qlua._luaD_poscall] }}
__declspec(naked) void luaD_precall(){_asm { jmp [qlua._luaD_precall] }}
__declspec(naked) void luaD_protectedparser(){_asm { jmp [qlua._luaD_protectedparser] }}
__declspec(naked) void luaD_rawrunprotected(){_asm { jmp [qlua._luaD_rawrunprotected] }}
__declspec(naked) void luaD_reallocCI(){_asm { jmp [qlua._luaD_reallocCI] }}
__declspec(naked) void luaD_reallocstack(){_asm { jmp [qlua._luaD_reallocstack] }}
__declspec(naked) void luaD_seterrorobj(){_asm { jmp [qlua._luaD_seterrorobj] }}
__declspec(naked) void luaD_throw(){_asm { jmp [qlua._luaD_throw] }}
__declspec(naked) void luaE_freethread(){_asm { jmp [qlua._luaE_freethread] }}
__declspec(naked) void luaE_newthread(){_asm { jmp [qlua._luaE_newthread] }}
__declspec(naked) void luaF_close(){_asm { jmp [qlua._luaF_close] }}
__declspec(naked) void luaF_findupval(){_asm { jmp [qlua._luaF_findupval] }}
__declspec(naked) void luaF_freeclosure(){_asm { jmp [qlua._luaF_freeclosure] }}
__declspec(naked) void luaF_freeproto(){_asm { jmp [qlua._luaF_freeproto] }}
__declspec(naked) void luaF_freeupval(){_asm { jmp [qlua._luaF_freeupval] }}
__declspec(naked) void luaF_getlocalname(){_asm { jmp [qlua._luaF_getlocalname] }}
__declspec(naked) void luaF_newCclosure(){_asm { jmp [qlua._luaF_newCclosure] }}
__declspec(naked) void luaF_newLclosure(){_asm { jmp [qlua._luaF_newLclosure] }}
__declspec(naked) void luaF_newproto(){_asm { jmp [qlua._luaF_newproto] }}
__declspec(naked) void luaF_newupval(){_asm { jmp [qlua._luaF_newupval] }}
__declspec(naked) void luaG_aritherror(){_asm { jmp [qlua._luaG_aritherror] }}
__declspec(naked) void luaG_checkcode(){_asm { jmp [qlua._luaG_checkcode] }}
__declspec(naked) void luaG_checkopenop(){_asm { jmp [qlua._luaG_checkopenop] }}
__declspec(naked) void luaG_concaterror(){_asm { jmp [qlua._luaG_concaterror] }}
__declspec(naked) void luaG_errormsg(){_asm { jmp [qlua._luaG_errormsg] }}
__declspec(naked) void luaG_ordererror(){_asm { jmp [qlua._luaG_ordererror] }}
__declspec(naked) void luaG_runerror(){_asm { jmp [qlua._luaG_runerror] }}
__declspec(naked) void luaG_typeerror(){_asm { jmp [qlua._luaG_typeerror] }}
__declspec(naked) void luaH_free(){_asm { jmp [qlua._luaH_free] }}
__declspec(naked) void luaH_get(){_asm { jmp [qlua._luaH_get] }}
__declspec(naked) void luaH_getn(){_asm { jmp [qlua._luaH_getn] }}
__declspec(naked) void luaH_getnum(){_asm { jmp [qlua._luaH_getnum] }}
__declspec(naked) void luaH_getstr(){_asm { jmp [qlua._luaH_getstr] }}
__declspec(naked) void luaH_new(){_asm { jmp [qlua._luaH_new] }}
__declspec(naked) void luaH_next(){_asm { jmp [qlua._luaH_next] }}
__declspec(naked) void luaH_resizearray(){_asm { jmp [qlua._luaH_resizearray] }}
__declspec(naked) void luaH_set(){_asm { jmp [qlua._luaH_set] }}
__declspec(naked) void luaH_setnum(){_asm { jmp [qlua._luaH_setnum] }}
__declspec(naked) void luaH_setstr(){_asm { jmp [qlua._luaH_setstr] }}
__declspec(naked) void luaK_checkstack(){_asm { jmp [qlua._luaK_checkstack] }}
__declspec(naked) void luaK_codeABC(){_asm { jmp [qlua._luaK_codeABC] }}
__declspec(naked) void luaK_codeABx(){_asm { jmp [qlua._luaK_codeABx] }}
__declspec(naked) void luaK_concat(){_asm { jmp [qlua._luaK_concat] }}
__declspec(naked) void luaK_dischargevars(){_asm { jmp [qlua._luaK_dischargevars] }}
__declspec(naked) void luaK_exp2RK(){_asm { jmp [qlua._luaK_exp2RK] }}
__declspec(naked) void luaK_exp2anyreg(){_asm { jmp [qlua._luaK_exp2anyreg] }}
__declspec(naked) void luaK_exp2nextreg(){_asm { jmp [qlua._luaK_exp2nextreg] }}
__declspec(naked) void luaK_exp2val(){_asm { jmp [qlua._luaK_exp2val] }}
__declspec(naked) void luaK_fixline(){_asm { jmp [qlua._luaK_fixline] }}
__declspec(naked) void luaK_getlabel(){_asm { jmp [qlua._luaK_getlabel] }}
__declspec(naked) void luaK_goiftrue(){_asm { jmp [qlua._luaK_goiftrue] }}
__declspec(naked) void luaK_indexed(){_asm { jmp [qlua._luaK_indexed] }}
__declspec(naked) void luaK_infix(){_asm { jmp [qlua._luaK_infix] }}
__declspec(naked) void luaK_jump(){_asm { jmp [qlua._luaK_jump] }}
__declspec(naked) void luaK_nil(){_asm { jmp [qlua._luaK_nil] }}
__declspec(naked) void luaK_numberK(){_asm { jmp [qlua._luaK_numberK] }}
__declspec(naked) void luaK_patchlist(){_asm { jmp [qlua._luaK_patchlist] }}
__declspec(naked) void luaK_patchtohere(){_asm { jmp [qlua._luaK_patchtohere] }}
__declspec(naked) void luaK_posfix(){_asm { jmp [qlua._luaK_posfix] }}
__declspec(naked) void luaK_prefix(){_asm { jmp [qlua._luaK_prefix] }}
__declspec(naked) void luaK_reserveregs(){_asm { jmp [qlua._luaK_reserveregs] }}
__declspec(naked) void luaK_ret(){_asm { jmp [qlua._luaK_ret] }}
__declspec(naked) void luaK_self(){_asm { jmp [qlua._luaK_self] }}
__declspec(naked) void luaK_setlist(){_asm { jmp [qlua._luaK_setlist] }}
__declspec(naked) void luaK_setoneret(){_asm { jmp [qlua._luaK_setoneret] }}
__declspec(naked) void luaK_setreturns(){_asm { jmp [qlua._luaK_setreturns] }}
__declspec(naked) void luaK_storevar(){_asm { jmp [qlua._luaK_storevar] }}
__declspec(naked) void luaK_stringK(){_asm { jmp [qlua._luaK_stringK] }}
__declspec(naked) void luaL_addlstring(){_asm { jmp [qlua._luaL_addlstring] }}
__declspec(naked) void luaL_addstring(){_asm { jmp [qlua._luaL_addstring] }}
__declspec(naked) void luaL_addvalue(){_asm { jmp [qlua._luaL_addvalue] }}
__declspec(naked) void luaL_argerror(){_asm { jmp [qlua._luaL_argerror] }}
__declspec(naked) void luaL_buffinit(){_asm { jmp [qlua._luaL_buffinit] }}
__declspec(naked) void luaL_callmeta(){_asm { jmp [qlua._luaL_callmeta] }}
__declspec(naked) void luaL_checkany(){_asm { jmp [qlua._luaL_checkany] }}
__declspec(naked) void luaL_checkinteger(){_asm { jmp [qlua._luaL_checkinteger] }}
__declspec(naked) void luaL_checklstring(){_asm { jmp [qlua._luaL_checklstring] }}
__declspec(naked) void luaL_checknumber(){_asm { jmp [qlua._luaL_checknumber] }}
__declspec(naked) void luaL_checkoption(){_asm { jmp [qlua._luaL_checkoption] }}
__declspec(naked) void luaL_checkstack(){_asm { jmp [qlua._luaL_checkstack] }}
__declspec(naked) void luaL_checktype(){_asm { jmp [qlua._luaL_checktype] }}
__declspec(naked) void luaL_checkudata(){_asm { jmp [qlua._luaL_checkudata] }}
__declspec(naked) void luaL_error(){_asm { jmp [qlua._luaL_error] }}
__declspec(naked) void luaL_findtable(){_asm { jmp [qlua._luaL_findtable] }}
__declspec(naked) void luaL_getmetafield(){_asm { jmp [qlua._luaL_getmetafield] }}
__declspec(naked) void luaL_gsub(){_asm { jmp [qlua._luaL_gsub] }}
__declspec(naked) void luaL_loadbuffer(){_asm { jmp [qlua._luaL_loadbuffer] }}
__declspec(naked) void luaL_loadfile(){_asm { jmp [qlua._luaL_loadfile] }}
__declspec(naked) void luaL_loadstring(){_asm { jmp [qlua._luaL_loadstring] }}
__declspec(naked) void luaL_newmetatable(){_asm { jmp [qlua._luaL_newmetatable] }}
__declspec(naked) void luaL_newstate(){_asm { jmp [qlua._luaL_newstate] }}
__declspec(naked) void luaL_openlib(){_asm { jmp [qlua._luaL_openlib] }}
__declspec(naked) void luaL_openlibs(){_asm { jmp [qlua._luaL_openlibs] }}
__declspec(naked) void luaL_optinteger(){_asm { jmp [qlua._luaL_optinteger] }}
__declspec(naked) void luaL_optlstring(){_asm { jmp [qlua._luaL_optlstring] }}
__declspec(naked) void luaL_optnumber(){_asm { jmp [qlua._luaL_optnumber] }}
__declspec(naked) void luaL_prepbuffer(){_asm { jmp [qlua._luaL_prepbuffer] }}
__declspec(naked) void luaL_pushresult(){_asm { jmp [qlua._luaL_pushresult] }}
__declspec(naked) void luaL_ref(){_asm { jmp [qlua._luaL_ref] }}
__declspec(naked) void luaL_register(){_asm { jmp [qlua._luaL_register] }}
__declspec(naked) void luaL_typerror(){_asm { jmp [qlua._luaL_typerror] }}
__declspec(naked) void luaL_unref(){_asm { jmp [qlua._luaL_unref] }}
__declspec(naked) void luaL_where(){_asm { jmp [qlua._luaL_where] }}
__declspec(naked) void luaM_growaux_(){_asm { jmp [qlua._luaM_growaux_] }}
__declspec(naked) void luaM_realloc_(){_asm { jmp [qlua._luaM_realloc_] }}
__declspec(naked) void luaM_toobig(){_asm { jmp [qlua._luaM_toobig] }}
__declspec(naked) void luaO_chunkid(){_asm { jmp [qlua._luaO_chunkid] }}
__declspec(naked) void luaO_fb2int(){_asm { jmp [qlua._luaO_fb2int] }}
__declspec(naked) void luaO_int2fb(){_asm { jmp [qlua._luaO_int2fb] }}
__declspec(naked) void luaO_log2(){_asm { jmp [qlua._luaO_log2] }}
__declspec(naked) void luaO_pushfstring(){_asm { jmp [qlua._luaO_pushfstring] }}
__declspec(naked) void luaO_pushvfstring(){_asm { jmp [qlua._luaO_pushvfstring] }}
__declspec(naked) void luaO_rawequalObj(){_asm { jmp [qlua._luaO_rawequalObj] }}
__declspec(naked) void luaO_str2d(){_asm { jmp [qlua._luaO_str2d] }}
__declspec(naked) void luaS_newlstr(){_asm { jmp [qlua._luaS_newlstr] }}
__declspec(naked) void luaS_newudata(){_asm { jmp [qlua._luaS_newudata] }}
__declspec(naked) void luaS_resize(){_asm { jmp [qlua._luaS_resize] }}
__declspec(naked) void luaT_gettm(){_asm { jmp [qlua._luaT_gettm] }}
__declspec(naked) void luaT_gettmbyobj(){_asm { jmp [qlua._luaT_gettmbyobj] }}
__declspec(naked) void luaT_init(){_asm { jmp [qlua._luaT_init] }}
__declspec(naked) void luaU_dump(){_asm { jmp [qlua._luaU_dump] }}
__declspec(naked) void luaU_header(){_asm { jmp [qlua._luaU_header] }}
__declspec(naked) void luaU_undump(){_asm { jmp [qlua._luaU_undump] }}
__declspec(naked) void luaV_concat(){_asm { jmp [qlua._luaV_concat] }}
__declspec(naked) void luaV_equalval(){_asm { jmp [qlua._luaV_equalval] }}
__declspec(naked) void luaV_execute(){_asm { jmp [qlua._luaV_execute] }}
__declspec(naked) void luaV_gettable(){_asm { jmp [qlua._luaV_gettable] }}
__declspec(naked) void luaV_lessthan(){_asm { jmp [qlua._luaV_lessthan] }}
__declspec(naked) void luaV_settable(){_asm { jmp [qlua._luaV_settable] }}
__declspec(naked) void luaV_tonumber(){_asm { jmp [qlua._luaV_tonumber] }}
__declspec(naked) void luaV_tostring(){_asm { jmp [qlua._luaV_tostring] }}
__declspec(naked) void luaX_init(){_asm { jmp [qlua._luaX_init] }}
__declspec(naked) void luaX_lexerror(){_asm { jmp [qlua._luaX_lexerror] }}
__declspec(naked) void luaX_lookahead(){_asm { jmp [qlua._luaX_lookahead] }}
__declspec(naked) void luaX_newstring(){_asm { jmp [qlua._luaX_newstring] }}
__declspec(naked) void luaX_next(){_asm { jmp [qlua._luaX_next] }}
__declspec(naked) void luaX_setinput(){_asm { jmp [qlua._luaX_setinput] }}
__declspec(naked) void luaX_syntaxerror(){_asm { jmp [qlua._luaX_syntaxerror] }}
__declspec(naked) void luaX_token2str(){_asm { jmp [qlua._luaX_token2str] }}
__declspec(naked) void luaY_parser(){_asm { jmp [qlua._luaY_parser] }}
__declspec(naked) void luaZ_fill(){_asm { jmp [qlua._luaZ_fill] }}
__declspec(naked) void luaZ_init(){_asm { jmp [qlua._luaZ_init] }}
__declspec(naked) void luaZ_lookahead(){_asm { jmp [qlua._luaZ_lookahead] }}
__declspec(naked) void luaZ_openspace(){_asm { jmp [qlua._luaZ_openspace] }}
__declspec(naked) void luaZ_read(){_asm { jmp [qlua._luaZ_read] }}
__declspec(naked) void lua_atpanic(){_asm { jmp [qlua._lua_atpanic] }}
__declspec(naked) void lua_call(){_asm { jmp [qlua._lua_call] }}
__declspec(naked) void lua_checkstack(){_asm { jmp [qlua._lua_checkstack] }}
__declspec(naked) void lua_close(){_asm { jmp [qlua._lua_close] }}
__declspec(naked) void lua_concat(){_asm { jmp [qlua._lua_concat] }}
__declspec(naked) void lua_cpcall(){_asm { jmp [qlua._lua_cpcall] }}
__declspec(naked) void lua_createtable(){_asm { jmp [qlua._lua_createtable] }}
__declspec(naked) void lua_dump(){_asm { jmp [qlua._lua_dump] }}
__declspec(naked) void lua_equal(){_asm { jmp [qlua._lua_equal] }}
__declspec(naked) void lua_error(){_asm { jmp [qlua._lua_error] }}
__declspec(naked) void lua_gc(){_asm { jmp [qlua._lua_gc] }}
__declspec(naked) void lua_getallocf(){_asm { jmp [qlua._lua_getallocf] }}
__declspec(naked) void lua_getfenv(){_asm { jmp [qlua._lua_getfenv] }}
__declspec(naked) void lua_getfield(){_asm { jmp [qlua._lua_getfield] }}
__declspec(naked) void lua_gethook(){_asm { jmp [qlua._lua_gethook] }}
__declspec(naked) void lua_gethookcount(){_asm { jmp [qlua._lua_gethookcount] }}
__declspec(naked) void lua_gethookmask(){_asm { jmp [qlua._lua_gethookmask] }}
__declspec(naked) void lua_getinfo(){_asm { jmp [qlua._lua_getinfo] }}
__declspec(naked) void lua_getlocal(){_asm { jmp [qlua._lua_getlocal] }}
__declspec(naked) void lua_getmetatable(){_asm { jmp [qlua._lua_getmetatable] }}
__declspec(naked) void lua_getstack(){_asm { jmp [qlua._lua_getstack] }}
__declspec(naked) void lua_gettable(){_asm { jmp [qlua._lua_gettable] }}
__declspec(naked) void lua_gettop(){_asm { jmp [qlua._lua_gettop] }}
__declspec(naked) void lua_getupvalue(){_asm { jmp [qlua._lua_getupvalue] }}
__declspec(naked) void lua_insert(){_asm { jmp [qlua._lua_insert] }}
__declspec(naked) void lua_iscfunction(){_asm { jmp [qlua._lua_iscfunction] }}
__declspec(naked) void lua_isnumber(){_asm { jmp [qlua._lua_isnumber] }}
__declspec(naked) void lua_isstring(){_asm { jmp [qlua._lua_isstring] }}
__declspec(naked) void lua_isuserdata(){_asm { jmp [qlua._lua_isuserdata] }}
__declspec(naked) void lua_lessthan(){_asm { jmp [qlua._lua_lessthan] }}
__declspec(naked) void lua_load(){_asm { jmp [qlua._lua_load] }}
__declspec(naked) void lua_newstate(){_asm { jmp [qlua._lua_newstate] }}
__declspec(naked) void lua_newthread(){_asm { jmp [qlua._lua_newthread] }}
__declspec(naked) void lua_newuserdata(){_asm { jmp [qlua._lua_newuserdata] }}
__declspec(naked) void lua_next(){_asm { jmp [qlua._lua_next] }}
__declspec(naked) void lua_objlen(){_asm { jmp [qlua._lua_objlen] }}
__declspec(naked) void lua_pcall(){_asm { jmp [qlua._lua_pcall] }}
__declspec(naked) void lua_pushboolean(){_asm { jmp [qlua._lua_pushboolean] }}
__declspec(naked) void lua_pushcclosure(){_asm { jmp [qlua._lua_pushcclosure] }}
__declspec(naked) void lua_pushfstring(){_asm { jmp [qlua._lua_pushfstring] }}
__declspec(naked) void lua_pushinteger(){_asm { jmp [qlua._lua_pushinteger] }}
__declspec(naked) void lua_pushlightuserdata(){_asm { jmp [qlua._lua_pushlightuserdata] }}
__declspec(naked) void lua_pushlstring(){_asm { jmp [qlua._lua_pushlstring] }}
__declspec(naked) void lua_pushnil(){_asm { jmp [qlua._lua_pushnil] }}
__declspec(naked) void lua_pushnumber(){_asm { jmp [qlua._lua_pushnumber] }}
__declspec(naked) void lua_pushstring(){_asm { jmp [qlua._lua_pushstring] }}
__declspec(naked) void lua_pushthread(){_asm { jmp [qlua._lua_pushthread] }}
__declspec(naked) void lua_pushvalue(){_asm { jmp [qlua._lua_pushvalue] }}
__declspec(naked) void lua_pushvfstring(){_asm { jmp [qlua._lua_pushvfstring] }}
__declspec(naked) void lua_rawequal(){_asm { jmp [qlua._lua_rawequal] }}
__declspec(naked) void lua_rawget(){_asm { jmp [qlua._lua_rawget] }}
__declspec(naked) void lua_rawgeti(){_asm { jmp [qlua._lua_rawgeti] }}
__declspec(naked) void lua_rawset(){_asm { jmp [qlua._lua_rawset] }}
__declspec(naked) void lua_rawseti(){_asm { jmp [qlua._lua_rawseti] }}
__declspec(naked) void lua_remove(){_asm { jmp [qlua._lua_remove] }}
__declspec(naked) void lua_replace(){_asm { jmp [qlua._lua_replace] }}
__declspec(naked) void lua_resume(){_asm { jmp [qlua._lua_resume] }}
__declspec(naked) void lua_setallocf(){_asm { jmp [qlua._lua_setallocf] }}
__declspec(naked) void lua_setfenv(){_asm { jmp [qlua._lua_setfenv] }}
__declspec(naked) void lua_setfield(){_asm { jmp [qlua._lua_setfield] }}
__declspec(naked) void lua_sethook(){_asm { jmp [qlua._lua_sethook] }}
__declspec(naked) void lua_setlevel(){_asm { jmp [qlua._lua_setlevel] }}
__declspec(naked) void lua_setlocal(){_asm { jmp [qlua._lua_setlocal] }}
__declspec(naked) void lua_setmetatable(){_asm { jmp [qlua._lua_setmetatable] }}
__declspec(naked) void lua_settable(){_asm { jmp [qlua._lua_settable] }}
__declspec(naked) void lua_settop(){_asm { jmp [qlua._lua_settop] }}
__declspec(naked) void lua_setupvalue(){_asm { jmp [qlua._lua_setupvalue] }}
__declspec(naked) void lua_status(){_asm { jmp [qlua._lua_status] }}
__declspec(naked) void lua_toboolean(){_asm { jmp [qlua._lua_toboolean] }}
__declspec(naked) void lua_tocfunction(){_asm { jmp [qlua._lua_tocfunction] }}
__declspec(naked) void lua_tointeger(){_asm { jmp [qlua._lua_tointeger] }}
__declspec(naked) void lua_tolstring(){_asm { jmp [qlua._lua_tolstring] }}
__declspec(naked) void lua_tonumber(){_asm { jmp [qlua._lua_tonumber] }}
__declspec(naked) void lua_topointer(){_asm { jmp [qlua._lua_topointer] }}
__declspec(naked) void lua_tothread(){_asm { jmp [qlua._lua_tothread] }}
__declspec(naked) void lua_touserdata(){_asm { jmp [qlua._lua_touserdata] }}
__declspec(naked) void lua_type(){_asm { jmp [qlua._lua_type] }}
__declspec(naked) void lua_typename(){_asm { jmp [qlua._lua_typename] }}
__declspec(naked) void lua_xmove(){_asm { jmp [qlua._lua_xmove] }}
__declspec(naked) void lua_yield(){_asm { jmp [qlua._lua_yield] }}
__declspec(naked) void luaopen_base(){_asm { jmp [qlua._luaopen_base] }}
__declspec(naked) void luaopen_bit(){_asm { jmp [qlua._luaopen_bit] }}
__declspec(naked) void luaopen_debug(){_asm { jmp [qlua._luaopen_debug] }}
__declspec(naked) void luaopen_io(){_asm { jmp [qlua._luaopen_io] }}
__declspec(naked) void luaopen_math(){_asm { jmp [qlua._luaopen_math] }}
__declspec(naked) void luaopen_os(){_asm { jmp [qlua._luaopen_os] }}
__declspec(naked) void luaopen_package(){_asm { jmp [qlua._luaopen_package] }}
__declspec(naked) void luaopen_string(){_asm { jmp [qlua._luaopen_string] }}
__declspec(naked) void luaopen_table(){_asm { jmp [qlua._luaopen_table] }}

BOOL APIENTRY DllMain( HMODULE hModule,
					   DWORD  ul_reason_for_call,
					   LPVOID lpReserved
					 )
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		MessageBox(0, "Proxy library loaded", APP_NAME, MB_ICONERROR);
		qlua.dll = LoadLibrary("qlua.dll");
		if (qlua.dll == false)
		{
			MessageBox(0, "Cannot load original qlua.dll library", APP_NAME, MB_ICONERROR);
			ExitProcess(0);
		}
		qlua._luaA_pushobject = GetProcAddress(qlua.dll, "luaA_pushobject");
			qlua._luaC_barrierback = GetProcAddress(qlua.dll, "luaC_barrierback");
			qlua._luaC_barrierf = GetProcAddress(qlua.dll, "luaC_barrierf");
			qlua._luaC_callGCTM = GetProcAddress(qlua.dll, "luaC_callGCTM");
			qlua._luaC_freeall = GetProcAddress(qlua.dll, "luaC_freeall");
			qlua._luaC_fullgc = GetProcAddress(qlua.dll, "luaC_fullgc");
			qlua._luaC_link = GetProcAddress(qlua.dll, "luaC_link");
			qlua._luaC_linkupval = GetProcAddress(qlua.dll, "luaC_linkupval");
			qlua._luaC_separateudata = GetProcAddress(qlua.dll, "luaC_separateudata");
			qlua._luaC_step = GetProcAddress(qlua.dll, "luaC_step");
			qlua._luaD_call = GetProcAddress(qlua.dll, "luaD_call");
			qlua._luaD_callhook = GetProcAddress(qlua.dll, "luaD_callhook");
			qlua._luaD_growstack = GetProcAddress(qlua.dll, "luaD_growstack");
			qlua._luaD_pcall = GetProcAddress(qlua.dll, "luaD_pcall");
			qlua._luaD_poscall = GetProcAddress(qlua.dll, "luaD_poscall");
			qlua._luaD_precall = GetProcAddress(qlua.dll, "luaD_precall");
			qlua._luaD_protectedparser = GetProcAddress(qlua.dll, "luaD_protectedparser");
			qlua._luaD_rawrunprotected = GetProcAddress(qlua.dll, "luaD_rawrunprotected");
			qlua._luaD_reallocCI = GetProcAddress(qlua.dll, "luaD_reallocCI");
			qlua._luaD_reallocstack = GetProcAddress(qlua.dll, "luaD_reallocstack");
			qlua._luaD_seterrorobj = GetProcAddress(qlua.dll, "luaD_seterrorobj");
			qlua._luaD_throw = GetProcAddress(qlua.dll, "luaD_throw");
			qlua._luaE_freethread = GetProcAddress(qlua.dll, "luaE_freethread");
			qlua._luaE_newthread = GetProcAddress(qlua.dll, "luaE_newthread");
			qlua._luaF_close = GetProcAddress(qlua.dll, "luaF_close");
			qlua._luaF_findupval = GetProcAddress(qlua.dll, "luaF_findupval");
			qlua._luaF_freeclosure = GetProcAddress(qlua.dll, "luaF_freeclosure");
			qlua._luaF_freeproto = GetProcAddress(qlua.dll, "luaF_freeproto");
			qlua._luaF_freeupval = GetProcAddress(qlua.dll, "luaF_freeupval");
			qlua._luaF_getlocalname = GetProcAddress(qlua.dll, "luaF_getlocalname");
			qlua._luaF_newCclosure = GetProcAddress(qlua.dll, "luaF_newCclosure");
			qlua._luaF_newLclosure = GetProcAddress(qlua.dll, "luaF_newLclosure");
			qlua._luaF_newproto = GetProcAddress(qlua.dll, "luaF_newproto");
			qlua._luaF_newupval = GetProcAddress(qlua.dll, "luaF_newupval");
			qlua._luaG_aritherror = GetProcAddress(qlua.dll, "luaG_aritherror");
			qlua._luaG_checkcode = GetProcAddress(qlua.dll, "luaG_checkcode");
			qlua._luaG_checkopenop = GetProcAddress(qlua.dll, "luaG_checkopenop");
			qlua._luaG_concaterror = GetProcAddress(qlua.dll, "luaG_concaterror");
			qlua._luaG_errormsg = GetProcAddress(qlua.dll, "luaG_errormsg");
			qlua._luaG_ordererror = GetProcAddress(qlua.dll, "luaG_ordererror");
			qlua._luaG_runerror = GetProcAddress(qlua.dll, "luaG_runerror");
			qlua._luaG_typeerror = GetProcAddress(qlua.dll, "luaG_typeerror");
			qlua._luaH_free = GetProcAddress(qlua.dll, "luaH_free");
			qlua._luaH_get = GetProcAddress(qlua.dll, "luaH_get");
			qlua._luaH_getn = GetProcAddress(qlua.dll, "luaH_getn");
			qlua._luaH_getnum = GetProcAddress(qlua.dll, "luaH_getnum");
			qlua._luaH_getstr = GetProcAddress(qlua.dll, "luaH_getstr");
			qlua._luaH_new = GetProcAddress(qlua.dll, "luaH_new");
			qlua._luaH_next = GetProcAddress(qlua.dll, "luaH_next");
			qlua._luaH_resizearray = GetProcAddress(qlua.dll, "luaH_resizearray");
			qlua._luaH_set = GetProcAddress(qlua.dll, "luaH_set");
			qlua._luaH_setnum = GetProcAddress(qlua.dll, "luaH_setnum");
			qlua._luaH_setstr = GetProcAddress(qlua.dll, "luaH_setstr");
			qlua._luaK_checkstack = GetProcAddress(qlua.dll, "luaK_checkstack");
			qlua._luaK_codeABC = GetProcAddress(qlua.dll, "luaK_codeABC");
			qlua._luaK_codeABx = GetProcAddress(qlua.dll, "luaK_codeABx");
			qlua._luaK_concat = GetProcAddress(qlua.dll, "luaK_concat");
			qlua._luaK_dischargevars = GetProcAddress(qlua.dll, "luaK_dischargevars");
			qlua._luaK_exp2RK = GetProcAddress(qlua.dll, "luaK_exp2RK");
			qlua._luaK_exp2anyreg = GetProcAddress(qlua.dll, "luaK_exp2anyreg");
			qlua._luaK_exp2nextreg = GetProcAddress(qlua.dll, "luaK_exp2nextreg");
			qlua._luaK_exp2val = GetProcAddress(qlua.dll, "luaK_exp2val");
			qlua._luaK_fixline = GetProcAddress(qlua.dll, "luaK_fixline");
			qlua._luaK_getlabel = GetProcAddress(qlua.dll, "luaK_getlabel");
			qlua._luaK_goiftrue = GetProcAddress(qlua.dll, "luaK_goiftrue");
			qlua._luaK_indexed = GetProcAddress(qlua.dll, "luaK_indexed");
			qlua._luaK_infix = GetProcAddress(qlua.dll, "luaK_infix");
			qlua._luaK_jump = GetProcAddress(qlua.dll, "luaK_jump");
			qlua._luaK_nil = GetProcAddress(qlua.dll, "luaK_nil");
			qlua._luaK_numberK = GetProcAddress(qlua.dll, "luaK_numberK");
			qlua._luaK_patchlist = GetProcAddress(qlua.dll, "luaK_patchlist");
			qlua._luaK_patchtohere = GetProcAddress(qlua.dll, "luaK_patchtohere");
			qlua._luaK_posfix = GetProcAddress(qlua.dll, "luaK_posfix");
			qlua._luaK_prefix = GetProcAddress(qlua.dll, "luaK_prefix");
			qlua._luaK_reserveregs = GetProcAddress(qlua.dll, "luaK_reserveregs");
			qlua._luaK_ret = GetProcAddress(qlua.dll, "luaK_ret");
			qlua._luaK_self = GetProcAddress(qlua.dll, "luaK_self");
			qlua._luaK_setlist = GetProcAddress(qlua.dll, "luaK_setlist");
			qlua._luaK_setoneret = GetProcAddress(qlua.dll, "luaK_setoneret");
			qlua._luaK_setreturns = GetProcAddress(qlua.dll, "luaK_setreturns");
			qlua._luaK_storevar = GetProcAddress(qlua.dll, "luaK_storevar");
			qlua._luaK_stringK = GetProcAddress(qlua.dll, "luaK_stringK");
			qlua._luaL_addlstring = GetProcAddress(qlua.dll, "luaL_addlstring");
			qlua._luaL_addstring = GetProcAddress(qlua.dll, "luaL_addstring");
			qlua._luaL_addvalue = GetProcAddress(qlua.dll, "luaL_addvalue");
			qlua._luaL_argerror = GetProcAddress(qlua.dll, "luaL_argerror");
			qlua._luaL_buffinit = GetProcAddress(qlua.dll, "luaL_buffinit");
			qlua._luaL_callmeta = GetProcAddress(qlua.dll, "luaL_callmeta");
			qlua._luaL_checkany = GetProcAddress(qlua.dll, "luaL_checkany");
			qlua._luaL_checkinteger = GetProcAddress(qlua.dll, "luaL_checkinteger");
			qlua._luaL_checklstring = GetProcAddress(qlua.dll, "luaL_checklstring");
			qlua._luaL_checknumber = GetProcAddress(qlua.dll, "luaL_checknumber");
			qlua._luaL_checkoption = GetProcAddress(qlua.dll, "luaL_checkoption");
			qlua._luaL_checkstack = GetProcAddress(qlua.dll, "luaL_checkstack");
			qlua._luaL_checktype = GetProcAddress(qlua.dll, "luaL_checktype");
			qlua._luaL_checkudata = GetProcAddress(qlua.dll, "luaL_checkudata");
			qlua._luaL_error = GetProcAddress(qlua.dll, "luaL_error");
			qlua._luaL_findtable = GetProcAddress(qlua.dll, "luaL_findtable");
			qlua._luaL_getmetafield = GetProcAddress(qlua.dll, "luaL_getmetafield");
			qlua._luaL_gsub = GetProcAddress(qlua.dll, "luaL_gsub");
			qlua._luaL_loadbuffer = GetProcAddress(qlua.dll, "luaL_loadbuffer");
			qlua._luaL_loadfile = GetProcAddress(qlua.dll, "luaL_loadfile");
			qlua._luaL_loadstring = GetProcAddress(qlua.dll, "luaL_loadstring");
			qlua._luaL_newmetatable = GetProcAddress(qlua.dll, "luaL_newmetatable");
			qlua._luaL_newstate = GetProcAddress(qlua.dll, "luaL_newstate");
			qlua._luaL_openlib = GetProcAddress(qlua.dll, "luaL_openlib");
			qlua._luaL_openlibs = GetProcAddress(qlua.dll, "luaL_openlibs");
			qlua._luaL_optinteger = GetProcAddress(qlua.dll, "luaL_optinteger");
			qlua._luaL_optlstring = GetProcAddress(qlua.dll, "luaL_optlstring");
			qlua._luaL_optnumber = GetProcAddress(qlua.dll, "luaL_optnumber");
			qlua._luaL_prepbuffer = GetProcAddress(qlua.dll, "luaL_prepbuffer");
			qlua._luaL_pushresult = GetProcAddress(qlua.dll, "luaL_pushresult");
			qlua._luaL_ref = GetProcAddress(qlua.dll, "luaL_ref");
			qlua._luaL_register = GetProcAddress(qlua.dll, "luaL_register");
			qlua._luaL_typerror = GetProcAddress(qlua.dll, "luaL_typerror");
			qlua._luaL_unref = GetProcAddress(qlua.dll, "luaL_unref");
			qlua._luaL_where = GetProcAddress(qlua.dll, "luaL_where");
			qlua._luaM_growaux_ = GetProcAddress(qlua.dll, "luaM_growaux_");
			qlua._luaM_realloc_ = GetProcAddress(qlua.dll, "luaM_realloc_");
			qlua._luaM_toobig = GetProcAddress(qlua.dll, "luaM_toobig");
			qlua._luaO_chunkid = GetProcAddress(qlua.dll, "luaO_chunkid");
			qlua._luaO_fb2int = GetProcAddress(qlua.dll, "luaO_fb2int");
			qlua._luaO_int2fb = GetProcAddress(qlua.dll, "luaO_int2fb");
			qlua._luaO_log2 = GetProcAddress(qlua.dll, "luaO_log2");
			qlua._luaO_pushfstring = GetProcAddress(qlua.dll, "luaO_pushfstring");
			qlua._luaO_pushvfstring = GetProcAddress(qlua.dll, "luaO_pushvfstring");
			qlua._luaO_rawequalObj = GetProcAddress(qlua.dll, "luaO_rawequalObj");
			qlua._luaO_str2d = GetProcAddress(qlua.dll, "luaO_str2d");
			qlua._luaS_newlstr = GetProcAddress(qlua.dll, "luaS_newlstr");
			qlua._luaS_newudata = GetProcAddress(qlua.dll, "luaS_newudata");
			qlua._luaS_resize = GetProcAddress(qlua.dll, "luaS_resize");
			qlua._luaT_gettm = GetProcAddress(qlua.dll, "luaT_gettm");
			qlua._luaT_gettmbyobj = GetProcAddress(qlua.dll, "luaT_gettmbyobj");
			qlua._luaT_init = GetProcAddress(qlua.dll, "luaT_init");
			qlua._luaU_dump = GetProcAddress(qlua.dll, "luaU_dump");
			qlua._luaU_header = GetProcAddress(qlua.dll, "luaU_header");
			qlua._luaU_undump = GetProcAddress(qlua.dll, "luaU_undump");
			qlua._luaV_concat = GetProcAddress(qlua.dll, "luaV_concat");
			qlua._luaV_equalval = GetProcAddress(qlua.dll, "luaV_equalval");
			qlua._luaV_execute = GetProcAddress(qlua.dll, "luaV_execute");
			qlua._luaV_gettable = GetProcAddress(qlua.dll, "luaV_gettable");
			qlua._luaV_lessthan = GetProcAddress(qlua.dll, "luaV_lessthan");
			qlua._luaV_settable = GetProcAddress(qlua.dll, "luaV_settable");
			qlua._luaV_tonumber = GetProcAddress(qlua.dll, "luaV_tonumber");
			qlua._luaV_tostring = GetProcAddress(qlua.dll, "luaV_tostring");
			qlua._luaX_init = GetProcAddress(qlua.dll, "luaX_init");
			qlua._luaX_lexerror = GetProcAddress(qlua.dll, "luaX_lexerror");
			qlua._luaX_lookahead = GetProcAddress(qlua.dll, "luaX_lookahead");
			qlua._luaX_newstring = GetProcAddress(qlua.dll, "luaX_newstring");
			qlua._luaX_next = GetProcAddress(qlua.dll, "luaX_next");
			qlua._luaX_setinput = GetProcAddress(qlua.dll, "luaX_setinput");
			qlua._luaX_syntaxerror = GetProcAddress(qlua.dll, "luaX_syntaxerror");
			qlua._luaX_token2str = GetProcAddress(qlua.dll, "luaX_token2str");
			qlua._luaY_parser = GetProcAddress(qlua.dll, "luaY_parser");
			qlua._luaZ_fill = GetProcAddress(qlua.dll, "luaZ_fill");
			qlua._luaZ_init = GetProcAddress(qlua.dll, "luaZ_init");
			qlua._luaZ_lookahead = GetProcAddress(qlua.dll, "luaZ_lookahead");
			qlua._luaZ_openspace = GetProcAddress(qlua.dll, "luaZ_openspace");
			qlua._luaZ_read = GetProcAddress(qlua.dll, "luaZ_read");
			qlua._lua_atpanic = GetProcAddress(qlua.dll, "lua_atpanic");
			qlua._lua_call = GetProcAddress(qlua.dll, "lua_call");
			qlua._lua_checkstack = GetProcAddress(qlua.dll, "lua_checkstack");
			qlua._lua_close = GetProcAddress(qlua.dll, "lua_close");
			qlua._lua_concat = GetProcAddress(qlua.dll, "lua_concat");
			qlua._lua_cpcall = GetProcAddress(qlua.dll, "lua_cpcall");
			qlua._lua_createtable = GetProcAddress(qlua.dll, "lua_createtable");
			qlua._lua_dump = GetProcAddress(qlua.dll, "lua_dump");
			qlua._lua_equal = GetProcAddress(qlua.dll, "lua_equal");
			qlua._lua_error = GetProcAddress(qlua.dll, "lua_error");
			qlua._lua_gc = GetProcAddress(qlua.dll, "lua_gc");
			qlua._lua_getallocf = GetProcAddress(qlua.dll, "lua_getallocf");
			qlua._lua_getfenv = GetProcAddress(qlua.dll, "lua_getfenv");
			qlua._lua_getfield = GetProcAddress(qlua.dll, "lua_getfield");
			qlua._lua_gethook = GetProcAddress(qlua.dll, "lua_gethook");
			qlua._lua_gethookcount = GetProcAddress(qlua.dll, "lua_gethookcount");
			qlua._lua_gethookmask = GetProcAddress(qlua.dll, "lua_gethookmask");
			qlua._lua_getinfo = GetProcAddress(qlua.dll, "lua_getinfo");
			qlua._lua_getlocal = GetProcAddress(qlua.dll, "lua_getlocal");
			qlua._lua_getmetatable = GetProcAddress(qlua.dll, "lua_getmetatable");
			qlua._lua_getstack = GetProcAddress(qlua.dll, "lua_getstack");
			qlua._lua_gettable = GetProcAddress(qlua.dll, "lua_gettable");
			qlua._lua_gettop = GetProcAddress(qlua.dll, "lua_gettop");
			qlua._lua_getupvalue = GetProcAddress(qlua.dll, "lua_getupvalue");
			qlua._lua_insert = GetProcAddress(qlua.dll, "lua_insert");
			qlua._lua_iscfunction = GetProcAddress(qlua.dll, "lua_iscfunction");
			qlua._lua_isnumber = GetProcAddress(qlua.dll, "lua_isnumber");
			qlua._lua_isstring = GetProcAddress(qlua.dll, "lua_isstring");
			qlua._lua_isuserdata = GetProcAddress(qlua.dll, "lua_isuserdata");
			qlua._lua_lessthan = GetProcAddress(qlua.dll, "lua_lessthan");
			qlua._lua_load = GetProcAddress(qlua.dll, "lua_load");
			qlua._lua_newstate = GetProcAddress(qlua.dll, "lua_newstate");
			qlua._lua_newthread = GetProcAddress(qlua.dll, "lua_newthread");
			qlua._lua_newuserdata = GetProcAddress(qlua.dll, "lua_newuserdata");
			qlua._lua_next = GetProcAddress(qlua.dll, "lua_next");
			qlua._lua_objlen = GetProcAddress(qlua.dll, "lua_objlen");
			qlua._lua_pcall = GetProcAddress(qlua.dll, "lua_pcall");
			qlua._lua_pushboolean = GetProcAddress(qlua.dll, "lua_pushboolean");
			qlua._lua_pushcclosure = GetProcAddress(qlua.dll, "lua_pushcclosure");
			qlua._lua_pushfstring = GetProcAddress(qlua.dll, "lua_pushfstring");
			qlua._lua_pushinteger = GetProcAddress(qlua.dll, "lua_pushinteger");
			qlua._lua_pushlightuserdata = GetProcAddress(qlua.dll, "lua_pushlightuserdata");
			qlua._lua_pushlstring = GetProcAddress(qlua.dll, "lua_pushlstring");
			qlua._lua_pushnil = GetProcAddress(qlua.dll, "lua_pushnil");
			qlua._lua_pushnumber = GetProcAddress(qlua.dll, "lua_pushnumber");
			qlua._lua_pushstring = GetProcAddress(qlua.dll, "lua_pushstring");
			qlua._lua_pushthread = GetProcAddress(qlua.dll, "lua_pushthread");
			qlua._lua_pushvalue = GetProcAddress(qlua.dll, "lua_pushvalue");
			qlua._lua_pushvfstring = GetProcAddress(qlua.dll, "lua_pushvfstring");
			qlua._lua_rawequal = GetProcAddress(qlua.dll, "lua_rawequal");
			qlua._lua_rawget = GetProcAddress(qlua.dll, "lua_rawget");
			qlua._lua_rawgeti = GetProcAddress(qlua.dll, "lua_rawgeti");
			qlua._lua_rawset = GetProcAddress(qlua.dll, "lua_rawset");
			qlua._lua_rawseti = GetProcAddress(qlua.dll, "lua_rawseti");
			qlua._lua_remove = GetProcAddress(qlua.dll, "lua_remove");
			qlua._lua_replace = GetProcAddress(qlua.dll, "lua_replace");
			qlua._lua_resume = GetProcAddress(qlua.dll, "lua_resume");
			qlua._lua_setallocf = GetProcAddress(qlua.dll, "lua_setallocf");
			qlua._lua_setfenv = GetProcAddress(qlua.dll, "lua_setfenv");
			qlua._lua_setfield = GetProcAddress(qlua.dll, "lua_setfield");
			qlua._lua_sethook = GetProcAddress(qlua.dll, "lua_sethook");
			qlua._lua_setlevel = GetProcAddress(qlua.dll, "lua_setlevel");
			qlua._lua_setlocal = GetProcAddress(qlua.dll, "lua_setlocal");
			qlua._lua_setmetatable = GetProcAddress(qlua.dll, "lua_setmetatable");
			qlua._lua_settable = GetProcAddress(qlua.dll, "lua_settable");
			qlua._lua_settop = GetProcAddress(qlua.dll, "lua_settop");
			qlua._lua_setupvalue = GetProcAddress(qlua.dll, "lua_setupvalue");
			qlua._lua_status = GetProcAddress(qlua.dll, "lua_status");
			qlua._lua_toboolean = GetProcAddress(qlua.dll, "lua_toboolean");
			qlua._lua_tocfunction = GetProcAddress(qlua.dll, "lua_tocfunction");
			qlua._lua_tointeger = GetProcAddress(qlua.dll, "lua_tointeger");
			qlua._lua_tolstring = GetProcAddress(qlua.dll, "lua_tolstring");
			qlua._lua_tonumber = GetProcAddress(qlua.dll, "lua_tonumber");
			qlua._lua_topointer = GetProcAddress(qlua.dll, "lua_topointer");
			qlua._lua_tothread = GetProcAddress(qlua.dll, "lua_tothread");
			qlua._lua_touserdata = GetProcAddress(qlua.dll, "lua_touserdata");
			qlua._lua_type = GetProcAddress(qlua.dll, "lua_type");
			qlua._lua_typename = GetProcAddress(qlua.dll, "lua_typename");
			qlua._lua_xmove = GetProcAddress(qlua.dll, "lua_xmove");
			qlua._lua_yield = GetProcAddress(qlua.dll, "lua_yield");
			qlua._luaopen_base = GetProcAddress(qlua.dll, "luaopen_base");
			qlua._luaopen_bit = GetProcAddress(qlua.dll, "luaopen_bit");
			qlua._luaopen_debug = GetProcAddress(qlua.dll, "luaopen_debug");
			qlua._luaopen_io = GetProcAddress(qlua.dll, "luaopen_io");
			qlua._luaopen_math = GetProcAddress(qlua.dll, "luaopen_math");
			qlua._luaopen_os = GetProcAddress(qlua.dll, "luaopen_os");
			qlua._luaopen_package = GetProcAddress(qlua.dll, "luaopen_package");
			qlua._luaopen_string = GetProcAddress(qlua.dll, "luaopen_string");
			qlua._luaopen_table = GetProcAddress(qlua.dll, "luaopen_table");
	break;
	case DLL_PROCESS_DETACH:
		break;
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
		break;
	}
	return TRUE;
}
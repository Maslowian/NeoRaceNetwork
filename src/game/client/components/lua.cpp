#include "lua.h"
#include <engine/shared/config.h>

#include <lua.hpp>

CLua::CLua()
{

}

CLua::~CLua()
{

}

void CLua::OnConsoleInit()
{
	Console()->Register("lua", "", CFGFLAG_CLIENT, ConLua, this, "Run lua script");
}

void CLua::ConLua(IConsole::IResult *pResult, void *pUserData)
{
	CLua *pLua = (CLua *)pUserData;
	pLua->Console()->Print(IConsole::OUTPUT_LEVEL_STANDARD, "lua", "LUA TIME", ColorRGBA(1.f, 0.f, 1.f));
}
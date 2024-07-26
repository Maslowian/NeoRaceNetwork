/* (c) Magnus Auvinen. See licence.txt in the root of the distribution for more information. */
/* If you are missing that file, acquire a complete release at teeworlds.com.                */
#ifndef GAME_CLIENT_COMPONENTS_LUA_H
#define GAME_CLIENT_COMPONENTS_LUA_H

#include <engine/console.h>

#include <game/client/component.h>

class IConfigManager;

class CLua : public CComponent
{
	static void ConLua(IConsole::IResult *pResult, void *pUserData);

public:
	CLua();
	~CLua();
	virtual int Sizeof() const override { return sizeof(*this); }

	virtual void OnConsoleInit() override;
};
#endif

#pragma once

#include "Hacks.h"

Vector GetAutostrafeView();

class CMiscHacks : public CHack
{
public:

	void Init();
	void Draw();
	void Move(CUserCmd *pCmd, bool &bSendPacket);
private:
	void PostProcces();
	void Impacts();
	void AutoPistol(CUserCmd * pCmd);
	void RotateMovement(CUserCmd * pCmd, float rotation);
	bool CircularStrafe(CUserCmd * pCmd, Vector & OriginalView);
	void SetClanTag(const char * tag, const char * name);
	void Namespam();
	void NoName();
	void NameSteal();
	void Crasher();
	void ChatSpamInterwebz();
	void AutoJump(CUserCmd *pCmd);
	void LegitStrafe(CUserCmd *pCmd);
	void MoonWalk(CUserCmd * pCmd);
	void RageStrafe(CUserCmd *pCmd);
	int CircleFactor = 0;
};




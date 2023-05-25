#pragma once

#include "ApplyRecruitmentUI.h"
#include "Member.h"
#include "RecruitmentInfo.h"

#ifndef MAX_STRING 
#define MAX_STRING 32
#endif
class ApplyRecruitmentUI;
class GeneralMember;	//���漱��

// 4.2. ä�� ���� control class
class ApplyRecruitment {
public:
	ApplyRecruitment(MemberList* memberList);	

private:
	ApplyRecruitmentUI* applyRecruitmentUI;
	GeneralMember* nowLoginedMember;
};
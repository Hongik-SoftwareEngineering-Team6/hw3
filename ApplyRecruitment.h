#pragma once

#include "ApplyRecruitmentUI.h"
#include "Member.h"
#include "RecruitmentInfo.h"

#ifndef MAX_STRING 
#define MAX_STRING 32
#endif
class ApplyRecruitmentUI;
class GeneralMember;	//전방선언

// 4.2. 채용 지원 control class
class ApplyRecruitment {
public:
	ApplyRecruitment(MemberList* memberList);	

private:
	ApplyRecruitmentUI* applyRecruitmentUI;
	GeneralMember* nowLoginedMember;
};
#pragma once
#include "ReadApplicationUI.h"
#include "Member.h"
class ReadApplicationUI;	//전방선언

// 4.3. 지원정보 조회 control class
class ReadApplication {

private:
	ReadApplicationUI* readApplicationUI;
	GeneralMember* nowLoginedMember;

public:
	ReadApplication(MemberList* memberList);

};

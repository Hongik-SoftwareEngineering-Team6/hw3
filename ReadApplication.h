#pragma once
#include "ReadApplicationUI.h"
#include "Member.h"
class ReadApplicationUI;

/* control에서 로그인이 되어있는 사용자를 찾아
	그 사용자의 지원정보를 모두 찾아 UI로
	보내 출력*/
class ReadApplication {

private:
	ReadApplicationUI* readApplicationUI;
	GeneralMember* nowLoginedMember;

public:
	ReadApplication(MemberList* memberList);

};

#pragma once
#include "ReadApplicationUI.h"
#include "Member.h"
class ReadApplicationUI;	//���漱��

// 4.3. �������� ��ȸ control class
class ReadApplication {

private:
	ReadApplicationUI* readApplicationUI;
	GeneralMember* nowLoginedMember;

public:
	ReadApplication(MemberList* memberList);

};

#pragma once
#include "ReadApplicationUI.h"
#include "Member.h"
class ReadApplicationUI;

/* control���� �α����� �Ǿ��ִ� ����ڸ� ã��
	�� ������� ���������� ��� ã�� UI��
	���� ���*/
class ReadApplication {

private:
	ReadApplicationUI* readApplicationUI;
	GeneralMember* nowLoginedMember;

public:
	ReadApplication(MemberList* memberList);

};

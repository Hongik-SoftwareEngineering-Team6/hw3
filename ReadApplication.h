#pragma once
#include "ReadApplicationUI.h"
#include "Member.h"

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

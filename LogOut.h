#pragma once

#ifndef MAX_STRING 
#define MAX_STRING 32
#endif

#include "LogOutUI.h"
#include "Member.h"

using namespace std;

class LogOutUI;

// 2.2 �α׾ƿ� control class
class LogOut {
private:
	MemberList* pMemberList;
	LogOutUI* pLoUI;

public:
	LogOut(MemberList*);	//������
	void requestLogOut();	//LogOutUI���� ȣ���ϴ� �α׾ƿ� ��û�Լ�
};

#ifndef _LOGOUT_H
#define _LOGOUT_H


#endif //_LOGOUT_H
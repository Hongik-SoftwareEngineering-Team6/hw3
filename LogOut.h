#pragma once

#ifndef MAX_STRING 
#define MAX_STRING 32
#endif

#include "LogOutUI.h"
#include "Member.h"

using namespace std;

class LogOutUI;

// 2.2 로그아웃 control class
class LogOut {
private:
	MemberList* pMemberList;
	LogOutUI* pLoUI;

public:
	LogOut(MemberList*);	//생성자
	void requestLogOut();	//LogOutUI에서 호출하는 로그아웃 요청함수
};

#ifndef _LOGOUT_H
#define _LOGOUT_H


#endif //_LOGOUT_H
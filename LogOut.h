#pragma once

#ifndef MAX_STRING 
#define MAX_STRING 32
#endif

#include "LogOutUI.h"
#include "Member.h"
using namespace std;

class LogOutUI;

class LogOut {
private:
	MemberList* pMemberList;
	LogOutUI* pLoUI;

public:
	LogOut(MemberList*);
	void requestLogOut();
};

#ifndef _LOGOUT_H
#define _LOGOUT_H


#endif //_LOGOUT_H
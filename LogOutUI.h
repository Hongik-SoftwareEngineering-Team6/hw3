#pragma once

#ifndef MAX_STRING 
#define MAX_STRING 32
#endif

#ifndef _LOGOUTUI_H
#define _LOGOUTUI_H

#include "LogOut.h"
using namespace std;

class LogOut;

class LogOutUI {

private:
	LogOut* pLogOut;

public:
	LogOutUI(LogOut*);
	void requestLogOut();
	void printLogOut(char*);
};

#endif //_LOGOUTUI_H
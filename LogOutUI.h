#pragma once

#ifndef MAX_STRING 
#define MAX_STRING 32
#endif

#ifndef _LOGOUTUI_H
#define _LOGOUTUI_H

#include "LogOut.h"

using namespace std;

class LogOut;

// 2.2 로그아웃 boundary class
class LogOutUI {

private:
	LogOut* pLogOut;

public:
	LogOutUI(LogOut*);			//생성자
	void requestLogOut();		//자기 자신의 생성자에서 호출하는 사용자 입력 감지 함수
	void printLogOut(char*);	//LogOut에서 호출하는 로그아웃 후 id 출력함수
};

#endif //_LOGOUTUI_H
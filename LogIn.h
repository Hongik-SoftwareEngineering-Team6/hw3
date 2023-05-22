#pragma once
#include <iostream>
#include "LogInUI.h"
#include "Member.h"
using namespace std;

// 2. 1. 로그인 control class 
class LogIn {
private:
	MemberList* members;
public:
	LogIn(MemberList*); 
	void requestLogIn(char*, char*); // LoginUI에서 호출하는 로그인 함수
};

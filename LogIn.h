#pragma once
#include <iostream>
#include "LogInUI.h"
#include "Member.h"
using namespace std;

// 2. 1. �α��� control class 
class LogIn {
private:
	MemberList* members;
public:
	LogIn(MemberList*); 
	void requestLogIn(char*, char*); // LoginUI���� ȣ���ϴ� �α��� �Լ�
};

#pragma once
#include <iostream>
#include "LogInUI.h"
#include "Member.h"
using namespace std;

class LogIn {
private:
	MemberList* members;
public:
	LogIn(MemberList*);
	void requestLogIn(char*, char*);
};

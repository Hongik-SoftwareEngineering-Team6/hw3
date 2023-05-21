#pragma once
#include <iostream>
#include "Login.h"
#define MAX_STRING 32
using namespace std;

class LogIn;

class LogInUI {

public:
	LogIn* pLogIn;

	void startInterface();
	void requestLogIn(char*, char*);
};

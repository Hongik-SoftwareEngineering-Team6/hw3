#pragma once
#include <iostream>
#include "Login.h"
#define MAX_STRING 32
using namespace std;

class LogIn; // 전방선언

// 2. 1. 로그인 boundary class
class LogInUI {
public:
	LogIn* pLogIn;
	void startInterface(); // Login에서 호출하는 로그인 기능 시작 함수
	void requestLogIn(char*, char*); // LoginUI에서 호출하는 로그인 함수
};

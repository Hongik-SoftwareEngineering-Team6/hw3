#pragma once
#include <iostream>
#include "Login.h"
#define MAX_STRING 32
using namespace std;

class LogIn; // ���漱��

// 2. 1. �α��� boundary class
class LogInUI {
public:
	LogIn* pLogIn;
	void startInterface(); // Login���� ȣ���ϴ� �α��� ��� ���� �Լ�
	void requestLogIn(char*, char*); // LoginUI���� ȣ���ϴ� �α��� �Լ�
};

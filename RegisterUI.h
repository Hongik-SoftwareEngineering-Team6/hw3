#pragma once
#include <iostream>
#include "Register.h"
#define MAX_STRING 32
using namespace std;

class Register; // ���漱��

// 1. 1. ȸ������ boundary class
class RegisterUI {	
public:
	Register* pRegister;
	void startInterface(); // Register���� ȣ���ϴ� ȸ������ ���� �Լ�
	void createMember(int, char*, char*, char*, char*); // RegisterUI���� ȣ���ϴ� ȸ������ �Լ�
};

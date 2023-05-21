#pragma once
#include <iostream>
#include "Register.h"
#define MAX_STRING 32
using namespace std;

class Register;

class RegisterUI {
	
public:
	Register* pRegister;

	void startInterface();
	void createMember(int, char*, char*, char*, char*);
};

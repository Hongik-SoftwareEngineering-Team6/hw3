#pragma once
#include <iostream>
#include "Register.h"
#define MAX_STRING 32
using namespace std;

class Register; // 전방선언

// 1. 1. 회원가입 boundary class
class RegisterUI {	
public:
	Register* pRegister;
	void startInterface(); // Register에서 호출하는 회원가입 시작 함수
	void createMember(int, char*, char*, char*, char*); // RegisterUI에서 호출하는 회원가입 함수
};

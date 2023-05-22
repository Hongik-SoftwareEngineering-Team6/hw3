#pragma once
#include <iostream>
#include "RegisterUI.h"
#include "Member.h"
using namespace std;

// 1. 1. 회원가입 control class 
class Register {
private:
	MemberList* members;
public:	
	Register(MemberList*);
	void createMember(int, char*, char*, char*, char*); // RegisterUI에서 호출하는 회원가입 함수
};

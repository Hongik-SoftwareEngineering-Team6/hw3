#pragma once
#include <iostream>
#include "RegisterUI.h"
#include "Member.h"
using namespace std;

// 1. 1. ȸ������ control class 
class Register {
private:
	MemberList* members;
public:	
	Register(MemberList*);
	void createMember(int, char*, char*, char*, char*); // RegisterUI���� ȣ���ϴ� ȸ������ �Լ�
};

#pragma once
#include <iostream>
#include "RegisterUI.h"
#include "Member.h"
using namespace std;

class Register {
private:
	MemberList* members;
public:
	
	Register(MemberList*);
	void createMember(int, char*, char*, char*, char*);
};

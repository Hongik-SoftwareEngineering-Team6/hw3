#pragma once
#include <iostream>
#include "UnregisterUI.h"
#include "Member.h"
using namespace std;

class Unregister {
private:
	MemberList* members;
public:
	Unregister(MemberList*);
	char* deleteMember();
};

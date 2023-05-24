#pragma once
#include <iostream>
#include "UnregisterUI.h"
#include "Member.h"
using namespace std;

// 1. 2. È¸¿øÅ»Åğ control class 
class Unregister {
private:
	MemberList* members;
public:
	Unregister(MemberList*);
	char* deleteMember(); // UnregisterUI¿¡¼­ È£ÃâÇÏ´Â È¸¿øÅ»Åğ ÇÔ¼ö. Å»Åğ ¿¹Á¤ÀÎ ¸â¹öÀÇ id ¹İÈ¯
};

#pragma once
#include <iostream>
#include "UnregisterUI.h"
#include "Member.h"
using namespace std;

// 1. 2. ȸ��Ż�� control class 
class Unregister {
private:
	MemberList* members;
public:
	Unregister(MemberList*);
	char* deleteMember(); // UnregisterUI���� ȣ���ϴ� ȸ��Ż�� �Լ�. Ż�� ������ ����� id ��ȯ
};

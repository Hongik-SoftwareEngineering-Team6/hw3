#pragma once
#include <iostream>
#include "Unregister.h"
#define MAX_STRING 32
using namespace std;

class Unregister; // ���漱�� 

// 1. 2. ȸ��Ż�� boundary class
class UnregisterUI {
public:
	Unregister* pUnregister;
	void startInterface(); // Unregister���� ȣ���ϴ� ȸ��Ż�� ���� �Լ�
	char* deleteMember(); // UnregisterUI���� ȣ���ϴ� ȸ��Ż�� �Լ�. Ż�� ������ ����� id ��ȯ
};

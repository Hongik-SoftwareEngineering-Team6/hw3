#pragma once
#include <iostream>
#include "Unregister.h"
#define MAX_STRING 32
using namespace std;

class Unregister; // ���漱�� 

class UnregisterUI {

public:
	Unregister* pUnregister;

	void startInterface();
	char* deleteMember();
};

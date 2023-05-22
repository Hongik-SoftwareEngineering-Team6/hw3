#pragma once
#include <iostream>
#include "Unregister.h"
#define MAX_STRING 32
using namespace std;

class Unregister; // 전방선언 

// 1. 2. 회원탈퇴 boundary class
class UnregisterUI {
public:
	Unregister* pUnregister;
	void startInterface(); // Unregister에서 호출하는 회원탈퇴 시작 함수
	char* deleteMember(); // UnregisterUI에서 호출하는 회원탈퇴 함수. 탈퇴 예정인 멤버의 id 반환
};

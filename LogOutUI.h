#pragma once

#ifndef MAX_STRING 
#define MAX_STRING 32
#endif

#ifndef _LOGOUTUI_H
#define _LOGOUTUI_H

#include "LogOut.h"

using namespace std;

class LogOut;

// 2.2 �α׾ƿ� boundary class
class LogOutUI {

private:
	LogOut* pLogOut;

public:
	LogOutUI(LogOut*);			//������
	void requestLogOut();		//�ڱ� �ڽ��� �����ڿ��� ȣ���ϴ� ����� �Է� ���� �Լ�
	void printLogOut(char*);	//LogOut���� ȣ���ϴ� �α׾ƿ� �� id ����Լ�
};

#endif //_LOGOUTUI_H
#pragma once

#include "ReadApplication.h"
class ReadApplication;	//���漱��

// 4.3. ���� ���� ��ȸ control class
class ReadApplicationUI {

private:
	ReadApplication* readApplication;

public:
	ReadApplicationUI(ReadApplication*);
	void printApplication(char* companyName, char* idNumber, char* work, int& recruitingNumber, char* deadline); // ���� ���� ���
	void printJob();	// � �Լ����� ���
	void makeMargin();	// �� ĭ ����
};
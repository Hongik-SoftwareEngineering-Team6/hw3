#pragma once

#include "ReadApplication.h"
class ReadApplication;	//전방선언

// 4.3. 지원 정보 조회 control class
class ReadApplicationUI {

private:
	ReadApplication* readApplication;

public:
	ReadApplicationUI(ReadApplication*);
	void printApplication(char* companyName, char* idNumber, char* work, int& recruitingNumber, char* deadline); // 지원 정보 출력
	void printJob();	// 어떤 함수인지 출력
	void makeMargin();	// 한 칸 띄우기
};
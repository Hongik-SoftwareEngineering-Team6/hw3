#pragma once

#include "ReadApplication.h"
class ReadApplication;

class ReadApplicationUI {

private:
	ReadApplication* readApplication;

public:
	ReadApplicationUI(ReadApplication*);
	void printApplication(char* companyName, char* idNumber, char* work, int& recruitingNumber, char* deadline);
	void printJob();
	void makeMargin();
};
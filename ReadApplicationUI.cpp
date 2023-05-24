#pragma once
#include "ReadApplicationUI.h"

ReadApplicationUI::ReadApplicationUI(ReadApplication* readApplication) {
	this->readApplication = readApplication;

}

void ReadApplicationUI::printJob() {
	extern FILE* out_fp;
	fprintf(out_fp, "4.3. ���� ���� ��ȸ\n");
}

void ReadApplicationUI::printApplication(char* companyName, char* idNumber, char* work, int& recruitingNumber, char* deadline) {
	extern FILE* out_fp;
	fprintf(out_fp, "> %s %d %s %d %s\n", companyName, idNumber, work, recruitingNumber, deadline);
}
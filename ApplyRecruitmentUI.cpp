#pragma once

#include "ApplyRecruitmentUI.h"
#include <iostream>

ApplyRecruitmentUI::ApplyRecruitmentUI(ApplyRecruitment* applyRecruitment) {
	this->applyRecruitment = applyRecruitment;


}
	// �Է� �ޱ�
void ApplyRecruitmentUI::getIdNumber(char* idNumber) {
	//char input_idNumber[MAX_STRING];

	extern FILE* in_fp, * out_fp;
	fscanf(in_fp, "%s", idNumber);

	
}

void ApplyRecruitmentUI::printResult(char* companyName, char* idNumber, char* work) {
	extern FILE* in_fp, * out_fp;
	fprintf(out_fp, "4.2. ä�� ����\n");
	fprintf(out_fp, "< %s %s %s\n", companyName, idNumber, work);
}
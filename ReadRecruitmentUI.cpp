#include "ReadRecruitmentUI.h"


ReadRecruitmentUI::ReadRecruitmentUI(ReadRecruitment* rrCtrl) {
	this->rrCtrl = rrCtrl;
}

void ReadRecruitmentUI::userInput() {
	this->rrCtrl->detectEvent(1);
}

void ReadRecruitmentUI::printRecruitmentInfo(char* work, int recruitingNumber, char* deadline) {
	extern FILE* out_fp;
	fprintf(out_fp, "3.2. ��ϵ� ä�� ���� ��ȸ \n");
	fprintf(out_fp, "> %s %d %s\n", work, recruitingNumber, deadline);
}
#include "CreateRecruitmentUI.h"


CreateRecruitmentUI::CreateRecruitmentUI(CreateRecruitment* crCtrl) {
	this->crCtrl = crCtrl;
}

void CreateRecruitmentUI::inputRecuitmentAttribute() {
    extern FILE* in_fp;
    fscanf(in_fp, "%s %d %s ", this->work, &this->recruitingNumber, this->deadline);
    this->crCtrl->detectEvent(1);
}


void CreateRecruitmentUI::getRecruitmentAttributes(char* work, int &recruitingNumber, char* deadline) {
    strcpy(work, this->work);
    strcpy(deadline, this->deadline);
    recruitingNumber = this->recruitingNumber;
}


void CreateRecruitmentUI::printRecruitmentInfo(char* work, int recruitingNumber, char* deadline, char* companyName) {
    extern FILE* out_fp;
    fprintf(out_fp, "3.1. 채용 정보 등록\n");
    fprintf(out_fp, "%s %d %s %s\n", work, recruitingNumber, deadline, companyName);
}
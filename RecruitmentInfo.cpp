#include "RecruitmentInfo.h"


void RecruitmentInfo::getRecruitmentInfo(char* work, int &recruitingNumber, char* deadline, char* companyName) {
	strcpy(work, this->work);
	strcpy(deadline, this->deadline);
	strcpy(companyName, this->companyName);
	recruitingNumber = this->recruitingNumber;
	printf("Get %s %d %s %s\n", this->work, this->recruitingNumber, this->deadline, this->companyName);
	//cout << "RI getInfo     " << this->work << " " << this->deadline << " " << this->companyName << endl;
}

RecruitmentInfo::RecruitmentInfo(char* work, int recruitingNumber, char* deadline, char* companyName) {
	strcpy(this->work, work);
	strcpy(this->deadline, deadline);
	strcpy(this->companyName, companyName);
	this->recruitingNumber = recruitingNumber;
	printf("Con %s %d %s %s\n", this->work, this->recruitingNumber, this->deadline, this->companyName);
	//cout << "RI Constructor " << this->work << " " << this->deadline << " " << this->companyName << endl;
}
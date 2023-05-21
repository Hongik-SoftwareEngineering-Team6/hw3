#include "RecruitmentInfo.h"


void RecruitmentInfo::getRecruitmentInfo(char* work, int &recruitingNumber, char* deadline, char* companyName) {
	strcpy(work, this->work);
	strcpy(deadline, this->deadline);
	strcpy(companyName, this->companyName);
	recruitingNumber = this->recruitingNumber;
}

RecruitmentInfo::RecruitmentInfo(char* work, int recruitingNumber, char* deadline, char* companyName) {
	strcpy(this->work, work);
	strcpy(this->deadline, deadline);
	strcpy(this->companyName, companyName);
	this->recruitingNumber = recruitingNumber;
}
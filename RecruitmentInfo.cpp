#include "RecruitmentInfo.h"


void RecruitmentInfo::getRecruitmentInfo(char* work, int &recruitingNumber, char* deadline, char* companyName, char* companyIdNumber) {
	strcpy(work, this->work);
	strcpy(deadline, this->deadline);
	strcpy(companyName, this->companyName);
	strcpy(companyIdNumber, this->companyIdNumber);
	recruitingNumber = this->recruitingNumber;
}

RecruitmentInfo::RecruitmentInfo(char* work, int recruitingNumber, char* deadline, char* companyName, char* companyIdNumber) {
	strcpy(this->work, work);
	strcpy(this->deadline, deadline);
	strcpy(this->companyName, companyName);
	strcpy(this->companyIdNumber, companyIdNumber);
	this->recruitingNumber = recruitingNumber;

	applicantNumber = 0;
}


void RecruitmentInfo::applied(GeneralMember* generalMember) {
	this->applicant[applicantNumber++] = generalMember;
}
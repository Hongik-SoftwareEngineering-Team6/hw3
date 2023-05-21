#include "ReadRecruitment.h"

ReadRecruitment::ReadRecruitment(MemberList* ml) {
	ReadRecruitmentUI rr(this);
	this->rrUI = &rr;
	this->nowLoginedMember = (CompanyMember*)ml->nowLoginedMember;

	this->rrUI->userInput();
};

void ReadRecruitment::detectEvent(int) {
	char work[MAX_STRING];
	char deadline[MAX_STRING];
	int recruitingNumber;
	char companyName[MAX_STRING];

	RecruitmentInfo* riptr = this->nowLoginedMember->listRecruitment();

	riptr->getRecruitmentInfo(work, recruitingNumber, deadline, companyName);
	this->rrUI->printRecruitmentInfo(work, recruitingNumber, deadline);
}

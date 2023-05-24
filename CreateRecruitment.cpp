#include "CreateRecruitment.h"


CreateRecruitment::CreateRecruitment(MemberList* ml) {
	//CreateRecruitmentUI* cr = new CreateRecruitmentUI(this);
	CreateRecruitmentUI cr(this);
	this->crUI = &cr;
	this->nowLoginedMember = (CompanyMember*)ml->nowLoginedMember;
	this->crUI->inputRecuitmentAttribute();

}


void CreateRecruitment::detectEvent(int) {
	char work[MAX_STRING];
	char deadline[MAX_STRING];
	int recruitingNumber;
	char companyName[MAX_STRING];
	char companyIdNumber[MAX_STRING];

	this->crUI->getRecruitmentAttributes(work, recruitingNumber, deadline);

	RecruitmentInfo* riptr = this->nowLoginedMember->addNewRecruitment(work, recruitingNumber, deadline);

	riptr->getRecruitmentInfo(work, recruitingNumber, deadline, companyName, companyIdNumber);
	this->crUI->printRecruitmentInfo(work, recruitingNumber, deadline);
}

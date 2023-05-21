#include "CreateRecruitment.h"


CreateRecruitment::CreateRecruitment() {
	//CreateRecruitmentUI* cr = new CreateRecruitmentUI(this);
	CreateRecruitmentUI cr(this);
	this->crUI = &cr;
	this->crUI->inputRecuitmentAttribute();

}


void CreateRecruitment::detectEvent(int) {
	char work[MAX_STRING];
	char deadline[MAX_STRING];
	int recruitingNumber;
	char companyName[MAX_STRING];

	this->crUI->getRecruitmentAttributes(work, recruitingNumber, deadline);


	extern CompanyMember cm;

	RecruitmentInfo* riptr = cm.addNewRecruitment(work, recruitingNumber, deadline);


	riptr->getRecruitmentInfo(work, recruitingNumber, deadline, companyName);
	this->crUI->printRecruitmentInfo(work, recruitingNumber, deadline, companyName);
}

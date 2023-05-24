#include "Member.h"

CompanyMember::CompanyMember(char* name, char* idNumber, char* id, char* password) : Member(name, idNumber, id, password) {
}


RecruitmentInfo* CompanyMember::listRecruitment() {
	return this->recruitmentInfo;
}

RecruitmentInfo* CompanyMember::addNewRecruitment(char* work, int recruitingNumber, char* deadline) {
	char cName[MAX_STRING];
	char cIdNumber[MAX_STRING];
	this->getName(cName);
	this->getIdNumber(cIdNumber);
	RecruitmentInfo* ri = new RecruitmentInfo(work, recruitingNumber, deadline, cName, cIdNumber);
	this->recruitmentInfo = ri;
	return this->recruitmentInfo;
}

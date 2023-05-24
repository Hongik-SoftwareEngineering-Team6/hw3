
#include "Member.h"

GeneralMember::GeneralMember(char* name, char* idNumber, char* id, char* password) : Member(name, idNumber, id, password) {
	this->applicationNumber = 0;
}

void GeneralMember::apply(RecruitmentInfo* recruitmentInfo) {
	applicationList[applicationNumber++] = recruitmentInfo;
}

int GeneralMember::getApplicationNumber() {
	return this->applicationNumber;
}

void GeneralMember::getApplicationInfo(char* companyName, char* idNumber, char* work, int& recruitingNumber, char* deadline, int applicationNumber) {
	cout << applicationNumber << endl;
	this->applicationList[applicationNumber-1]->getRecruitmentInfo(work, recruitingNumber, deadline, companyName, idNumber);
}
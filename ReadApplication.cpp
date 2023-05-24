#pragma once
#include "ReadApplication.h"
#include "ReadApplicationUI.h"
#include "Member.h"

ReadApplication::ReadApplication(MemberList* memberList) {
	ReadApplicationUI readApplication(this);
	this->readApplicationUI = &readApplication;
	this->nowLoginedMember = (GeneralMember*)memberList->nowLoginedMember;

	// 지원 개수 구하기
	int applicationNumber;
	applicationNumber = nowLoginedMember->getApplicationNumber();

	// 받아올 변수 선언
	char companyName[MAX_STRING];
	char idNumber[MAX_STRING];
	char work[MAX_STRING];
	int recruitingNumber;
	char deadline[MAX_STRING];

	//지원 개수만큼 앞에서부터 getApplication call, print
	for (int i = 0; i < applicationNumber; i++) {
		nowLoginedMember->getApplicationInfo(companyName, idNumber, work, recruitingNumber, deadline, applicationNumber);
		readApplicationUI->printApplication(companyName, idNumber, work, recruitingNumber, deadline);
	}
}
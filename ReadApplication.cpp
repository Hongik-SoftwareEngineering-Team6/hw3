#pragma once
#include "ReadApplication.h"
#include "ReadApplicationUI.h"
#include "Member.h"

ReadApplication::ReadApplication(MemberList* memberList) {
		
	this->nowLoginedMember = (GeneralMember*)memberList->nowLoginedMember;
	ReadApplicationUI readApplication(this);
	this->readApplicationUI = &readApplication;

	// ���� ���� ���ϱ�
	int applicationNumber;
	applicationNumber = nowLoginedMember->getApplicationNumber();

	// �޾ƿ� ���� ����
	char companyName[MAX_STRING];
	char idNumber[MAX_STRING];
	char work[MAX_STRING];
	int recruitingNumber;
	char deadline[MAX_STRING];

	// job ���
	readApplicationUI->printJob();

	//���� ������ŭ �տ������� getApplication call, print
	for (int i = 0; i < applicationNumber; i++) {
		nowLoginedMember->getApplicationInfo(companyName, idNumber, work, recruitingNumber, deadline, i);
		readApplicationUI->printApplication(companyName, idNumber, work, recruitingNumber, deadline);
	}
	
	readApplicationUI->makeMargin();
}
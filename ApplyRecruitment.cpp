#pragma once
#include "ApplyRecruitment.h"


ApplyRecruitment::ApplyRecruitment(MemberList* memberList){

	ApplyRecruitmentUI applyRecruitmentUI(this);
	this->applyRecruitmentUI = &applyRecruitmentUI;

	// ����� �˾Ƴ���
	this->nowLoginedMember = (GeneralMember*)memberList->nowLoginedMember;

	// ����� ��ȣ �Է� �ޱ�
	char idNumber[MAX_STRING];
	applyRecruitmentUI.getIdNumber(idNumber);

	// ����� ��ȣ�� ȸ��ȸ�� ã��
	CompanyMember* companyMember;
	companyMember = memberList->searchCompanyMemberByIdNumber(idNumber);

	// ȸ��ȸ������ ä�� ���� ã��
	RecruitmentInfo* recruitmentInfo;
	recruitmentInfo = companyMember->listRecruitment();

	// �Ϲ�ȸ�� ��ü ����
	this->nowLoginedMember->apply(recruitmentInfo);

	// ä������ ��ü ����
	recruitmentInfo->applied(nowLoginedMember);

	// ��� ���
	char work[MAX_STRING];
	int recruitingNumber;
	char deadline[MAX_STRING];
	char companyName[MAX_STRING];
	char work[MAX_STRING];
	recruitmentInfo->getRecruitmentInfo(work, recruitingNumber, deadline, companyName);
	applyRecruitmentUI.printResult(companyName, idNumber, work);
}


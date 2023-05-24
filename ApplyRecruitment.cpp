#pragma once
#include "ApplyRecruitment.h"
class RecruitmentInfo;

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


	// ��� ���
	char work[MAX_STRING];
	int recruitingNumber;
	char deadline[MAX_STRING];
	char companyName[MAX_STRING];
	char newIdNumber[MAX_STRING];

	recruitmentInfo->getRecruitmentInfo(work, recruitingNumber, deadline, companyName, newIdNumber);
	applyRecruitmentUI.printResult(companyName, idNumber, work);
}


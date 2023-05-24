#include "SearchRecruitment.h"
#include "SearchRecruitmentUI.h"
#include "Member.h"
#include "RecruitmentInfo.h"

SearchRecruitment::SearchRecruitment(MemberList* memberlist) {
	SearchRecruitmentUI searchRecruitmentUI(this);
	this->memberList = memberList;
	this->searchRecruitmentUI = &searchRecruitmentUI;
}

void SearchRecruitment::SearchRecruitmentInfo(char* companyName) {
	CompanyMember* companyMember;
	companyMember = memberList.searchCompanyMember(companyName);	// ã�ƾ� �ϴ� ȸ��ȸ�� ������

	RecruitmentInfo* recruitmentInfo;
	recruitmentInfo = companyMember->listRecruitment();	//ȸ��ȸ�����κ��� ä�� ������ ã��

	char work[MAX_STRING]; int recruitingNumber; char deadline[MAX_STRING]; char name[MAX_STRING];
	recruitmentInfo->getRecruitmentInfo(work, recruitingNumber, deadline, name);//ä�� �����ͷκ��� ä�� ���� ã��
	
	char* idNumber;
	companyMember->getIdNumber(idNumber);

	this->searchRecruitmentUI->printRecruitmentInfo(companyName, idNumber, work, recruitingNumber, deadline);
}
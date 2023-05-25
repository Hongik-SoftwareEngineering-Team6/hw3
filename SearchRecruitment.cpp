#include "SearchRecruitment.h"
#include "SearchRecruitmentUI.h"
#include "Member.h"
#include "RecruitmentInfo.h"

SearchRecruitment::SearchRecruitment(MemberList* _memberList) {

	this->memberList = _memberList;
	SearchRecruitmentUI searchRecruitmentUI(this);
	
	this->searchRecruitmentUI = &searchRecruitmentUI;
}

void SearchRecruitment::SearchRecruitmentInfo(char* companyName) {

	CompanyMember* companyMember;
	cout << memberList << endl;
	companyMember = memberList->searchCompanyMember(companyName);	// ã�ƾ� �ϴ� ȸ��ȸ�� ������

	RecruitmentInfo* recruitmentInfo;
	recruitmentInfo = companyMember->listRecruitment();	//ȸ��ȸ�����κ��� ä�� ������ ã��

	char work[MAX_STRING]; int recruitingNumber; char deadline[MAX_STRING]; char name[MAX_STRING];	char idNumber[MAX_STRING];
	recruitmentInfo->getRecruitmentInfo(work, recruitingNumber, deadline, name, idNumber);//ä�� �����ͷκ��� ä�� ���� ã��
	
	this->searchRecruitmentUI->printRecruitmentInfo(companyName, idNumber, work, recruitingNumber, deadline);
}
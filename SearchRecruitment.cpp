#include "SearchRecruitment.h"
#include "SearchRecruitmentUI.h"
#include "Member.h"
#include "RecruitmentInfo.h"

SearchRecruitment::SearchRecruitment(MemberList* _memberList) {
	cout << "searchrecUI" << endl;
	this->memberList = _memberList;
	SearchRecruitmentUI searchRecruitmentUI(this);
	cout << "��ġ ����Ʈ��Ʈ"<< _memberList << endl;

	this->searchRecruitmentUI = &searchRecruitmentUI;
}

void SearchRecruitment::SearchRecruitmentInfo(char* companyName) {

	CompanyMember* companyMember;
	cout << memberList << endl;
	companyMember = memberList->searchCompanyMember(companyName);	// ã�ƾ� �ϴ� ȸ��ȸ�� ������
		cout << "1" << endl;
	cout << companyMember;
	RecruitmentInfo* recruitmentInfo;
	recruitmentInfo = companyMember->listRecruitment();	//ȸ��ȸ�����κ��� ä�� ������ ã��

	char work[MAX_STRING]; int recruitingNumber; char deadline[MAX_STRING]; char name[MAX_STRING];	char idNumber[MAX_STRING];
	recruitmentInfo->getRecruitmentInfo(work, recruitingNumber, deadline, name, idNumber);//ä�� �����ͷκ��� ä�� ���� ã��
	

	//companyMember->getIdNumber(idNumber);

	this->searchRecruitmentUI->printRecruitmentInfo(companyName, idNumber, work, recruitingNumber, deadline);
}
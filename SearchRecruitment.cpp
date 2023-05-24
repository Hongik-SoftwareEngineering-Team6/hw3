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
	companyMember = memberList.searchCompanyMember(companyName);	// 찾아야 하는 회사회원 포인터

	RecruitmentInfo* recruitmentInfo;
	recruitmentInfo = companyMember->listRecruitment();	//회사회원으로부터 채용 포인터 찾기

	char work[MAX_STRING]; int recruitingNumber; char deadline[MAX_STRING]; char name[MAX_STRING];
	recruitmentInfo->getRecruitmentInfo(work, recruitingNumber, deadline, name);//채용 포인터로부터 채용 정보 찾기
	
	char* idNumber;
	companyMember->getIdNumber(idNumber);

	this->searchRecruitmentUI->printRecruitmentInfo(companyName, idNumber, work, recruitingNumber, deadline);
}
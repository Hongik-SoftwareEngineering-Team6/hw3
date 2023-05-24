#pragma once
#include "SearchRecruitment.h"
#include "SearchRecruitmentUI.h"
#include "Member.h"
#include "RecruitmentInfo.h"

class SearchRecruitment {
public:
	SearchRecruitment(MemberList* memberlist);	//생성자

	// UI에서 호출. 회사 이름으로 회사의 채용 정보를 찾아 
	void SearchRecruitmentInfo(char* companyName);
private:
	SearchRecruitmentUI* searchRecruitmentUI;
	MemberList* memberList;
};
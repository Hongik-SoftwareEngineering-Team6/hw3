#pragma once
#include "SearchRecruitment.h"
#include "SearchRecruitmentUI.h"
#include "Member.h"
#include "RecruitmentInfo.h"

// 4.1. 채용 정보 검색 control class
class SearchRecruitment {
public:
	SearchRecruitment(MemberList* memberlist);	//생성자


	void SearchRecruitmentInfo(char* companyName);	// 회사 이름으로 회사의 채용 정보를 찾기 
private:
	SearchRecruitmentUI* searchRecruitmentUI;
	MemberList* memberList;
};
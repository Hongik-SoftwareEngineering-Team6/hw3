#pragma once
#include "SearchRecruitment.h"
#include "SearchRecruitmentUI.h"
#include "Member.h"
#include "RecruitmentInfo.h"

// 4.1. ä�� ���� �˻� control class
class SearchRecruitment {
public:
	SearchRecruitment(MemberList* memberlist);	//������


	void SearchRecruitmentInfo(char* companyName);	// ȸ�� �̸����� ȸ���� ä�� ������ ã�� 
private:
	SearchRecruitmentUI* searchRecruitmentUI;
	MemberList* memberList;
};
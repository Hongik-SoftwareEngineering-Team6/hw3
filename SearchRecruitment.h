#pragma once
#include "SearchRecruitment.h"
#include "SearchRecruitmentUI.h"
#include "Member.h"
#include "RecruitmentInfo.h"

class SearchRecruitment {
public:
	SearchRecruitment(MemberList* memberlist);	//������

	// UI���� ȣ��. ȸ�� �̸����� ȸ���� ä�� ������ ã�� 
	void SearchRecruitmentInfo(char* companyName);
private:
	SearchRecruitmentUI* searchRecruitmentUI;
	MemberList* memberList;
};
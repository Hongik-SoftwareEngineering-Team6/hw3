#pragma once
#include "SearchRecruitment.h"
class SearchRecruitment;

// 4.1. ä�� ���� �˻� boundary class
class SearchRecruitmentUI {
public:

	SearchRecruitmentUI(SearchRecruitment* searchRecruitment);	
	void printRecruitmentInfo(char* companyName, char* idNumber, char* work, int recruitingNumber, char* deadline); // ä�� ���� ���
private:
	SearchRecruitment* searchRecruitment;
};
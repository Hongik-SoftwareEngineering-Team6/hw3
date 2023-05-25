#pragma once
#include "SearchRecruitment.h"
class SearchRecruitment;

// 4.1. 채용 정보 검색 boundary class
class SearchRecruitmentUI {
public:

	SearchRecruitmentUI(SearchRecruitment* searchRecruitment);	
	void printRecruitmentInfo(char* companyName, char* idNumber, char* work, int recruitingNumber, char* deadline); // 채용 정보 출력
private:
	SearchRecruitment* searchRecruitment;
};
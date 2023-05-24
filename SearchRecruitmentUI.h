#pragma once
#include "SearchRecruitment.h"
class SearchRecruitment;

class SearchRecruitmentUI {
public:
	//생성자. 사용자 입력 받기 컨트롤의 getRecruitment호출
	SearchRecruitmentUI(SearchRecruitment* searchRecruitment);	
	//컨트롤에서 호출. 채용정보 출력
	void printRecruitmentInfo(char* companyName, char* idNumber, char* work, int recruitingNumber, char* deadline);
private:
	SearchRecruitment* searchRecruitment;
};
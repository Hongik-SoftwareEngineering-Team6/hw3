#pragma once
#include "SearchRecruitment.h"
class SearchRecruitment;

class SearchRecruitmentUI {
public:
	//������. ����� �Է� �ޱ� ��Ʈ���� getRecruitmentȣ��
	SearchRecruitmentUI(SearchRecruitment* searchRecruitment);	
	//��Ʈ�ѿ��� ȣ��. ä������ ���
	void printRecruitmentInfo(char* companyName, char* idNumber, char* work, int recruitingNumber, char* deadline);
private:
	SearchRecruitment* searchRecruitment;
};
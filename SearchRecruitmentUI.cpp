#include "SearchRecruitment.h"
#include "SearchRecruitmentUI.h"
#include <iostream>

#ifndef MAX_STRING 
#define MAX_STRING 32
#endif

SearchRecruitmentUI::SearchRecruitmentUI(SearchRecruitment* searchRecruitment) {
	this->searchRecruitment = searchRecruitment;

	char companyName[MAX_STRING];


	// input file�κ��� �˻��� ȸ�� �̸��� �д´�.
	extern FILE* in_fp, * out_fp;
	fscanf(in_fp, "%s", companyName);

	//��Ʈ�� ȣ��
	cout << "before" << endl;
	searchRecruitment->SearchRecruitmentInfo(companyName);	// ��Ʈ�� ȣ��
	cout << "beforerrfrrfdrd" << endl;
}
void SearchRecruitmentUI::printRecruitmentInfo(char* companyName, char* idNumber, char* work, int recruitingNumber, char* deadline) {
	extern FILE* in_fp, * out_fp;
	fprintf(out_fp, "4.1. ä�� ���� �˻�\n");
	fprintf(out_fp, "> %s %s %s %d %s\n", companyName, idNumber, work, recruitingNumber, deadline);
}
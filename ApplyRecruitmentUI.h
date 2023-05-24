#pragma once
#include "ApplyRecruitment.h"
#define MAX_STRING 32

class ApplyRecruitmentUI {
public:
	ApplyRecruitmentUI(ApplyRecruitment* applyRecruitment);
	void getIdNumber(char* idNumber);	// 파일로부터 사업자 번호 입력받기
	void printResult(char* companyName, char* idNumber, char* work);	// 회사이름, 사업자번호, 업무 출력
private:
	ApplyRecruitment* applyRecruitment;
};
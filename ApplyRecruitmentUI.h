#pragma once
#include "ApplyRecruitment.h"
#define MAX_STRING 32

class ApplyRecruitmentUI {
public:
	ApplyRecruitmentUI(ApplyRecruitment* applyRecruitment);
	void getIdNumber(char* idNumber);	// ���Ϸκ��� ����� ��ȣ �Է¹ޱ�
	void printResult(char* companyName, char* idNumber, char* work);	// ȸ���̸�, ����ڹ�ȣ, ���� ���
private:
	ApplyRecruitment* applyRecruitment;
};
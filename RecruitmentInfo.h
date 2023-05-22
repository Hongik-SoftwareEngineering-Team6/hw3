#ifndef MAX_STRING 
#define MAX_STRING 32
#endif

#ifndef _RECRUITMENTINFO_H
#define _RECRUITMENTINFO_H

#include <string>
#include <stdio.h>

using namespace std;

// ä������ entity class
class RecruitmentInfo {

public: 
    RecruitmentInfo(char* work, int recruitingNumber, char* deadline, char* companyName);           //������
    void getRecruitmentInfo(char* work, int &recruitingNumber, char* deadline, char* companyName);  //�ܺο��� ȣ���ϴ� ä������� ������ �ޱ����� �Լ�

private: 
    char work[MAX_STRING];
    int recruitingNumber;
    char deadline[MAX_STRING];
    char companyName[MAX_STRING];
};

#endif //_RECRUITMENTINFO_H
#ifndef MAX_STRING 
#define MAX_STRING 32
#endif

#ifndef _RECRUITMENTINFO_H
#define _RECRUITMENTINFO_H

#include <string>
#include <stdio.h>
#include "Member.h"
class GeneralMember;

using namespace std;

// 채용정보 entity class
class RecruitmentInfo {

public: 
    RecruitmentInfo(char* work, int recruitingNumber, char* deadline, char* companyName, char* companyIdNumber);           //생성자
    void getRecruitmentInfo(char* work, int &recruitingNumber, char* deadline, char* companyName, char* companyIdNumber);  //외부에서 호출하는 채용공고의 정보를 받기위한 함수
    void applied(GeneralMember* generalMember); //지원자의 지원

private: 
    char work[MAX_STRING];
    int recruitingNumber;
    char deadline[MAX_STRING];
    char companyName[MAX_STRING];
    char companyIdNumber[MAX_STRING];

    GeneralMember* applicant[30];   // 지원자 포인터
    int applicantNumber;            // 지원자 수

};

#endif //_RECRUITMENTINFO_H
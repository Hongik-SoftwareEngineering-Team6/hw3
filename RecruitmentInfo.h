#ifndef MAX_STRING 
#define MAX_STRING 32
#endif

#ifndef _RECRUITMENTINFO_H
#define _RECRUITMENTINFO_H

#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;

class RecruitmentInfo {
public: 
    RecruitmentInfo(char* work, int recruitingNumber, char* deadline, char* companyName);
    void getRecruitmentInfo(char* work, int &recruitingNumber, char* deadline, char* companyName);


private: 
    char work[MAX_STRING];
    int recruitingNumber;
    char deadline[MAX_STRING];
    char companyName[MAX_STRING];
};

#endif //_RECRUITMENTINFO_H
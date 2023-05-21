#ifndef _COMPANYMEMBER_H
#define _COMPANYMEMBER_H

#include "Member.h"
#include "RecruitmentInfo.h"
#include <string>
#include <vector>

using namespace std;

class CompanyMember: public Member {
public: 
    CompanyMember(char* name, char* idNumber, char* id, char* password);
    RecruitmentInfo* listRecruitment();
    RecruitmentInfo* addNewRecruitment(char* work, int recruitingNumber, char* deadline);

private: 
    RecruitmentInfo* recruitmentList[1];
};

#endif //_COMPANYMEMBER_H
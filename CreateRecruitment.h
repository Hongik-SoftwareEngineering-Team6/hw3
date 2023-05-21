/**
 * Project hw2
 */
#ifndef MAX_STRING 
#define MAX_STRING 32
#endif

#ifndef _CREATERECRUITMENT_H
#define _CREATERECRUITMENT_H

#include <string>
#include <iostream>
#include "CreateRecruitmentUI.h"
#include "Member.h"
#include "RecruitmentInfo.h"

using namespace std;

class CreateRecruitmentUI;

class CreateRecruitment {
public: 
    void detectEvent( int );
    CreateRecruitment(MemberList*);

private: 
    CompanyMember* nowLoginedMember;
    CreateRecruitmentUI* crUI;
};

#endif //_CREATERECRUITMENT_H
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
#include "CompanyMember.h"
#include "RecruitmentInfo.h"

using namespace std;

class CreateRecruitmentUI;

class CreateRecruitment {
public: 

    void detectEvent( int );
    CreateRecruitment();

private: 

    CreateRecruitmentUI* crUI;
};

#endif //_CREATERECRUITMENT_H
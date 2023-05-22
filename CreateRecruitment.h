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

// 3.1 채용 정보 등록 control class
class CreateRecruitment {

public: 
    CreateRecruitment(MemberList*); // 생성자
    void detectEvent( int ); // CreateRecruitmentUI에서 호출하는 입력 감지 함수

private: 
    CompanyMember* nowLoginedMember;
    CreateRecruitmentUI* crUI;
};

#endif //_CREATERECRUITMENT_H
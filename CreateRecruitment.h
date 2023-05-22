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

// 3.1 ä�� ���� ��� control class
class CreateRecruitment {

public: 
    CreateRecruitment(MemberList*); // ������
    void detectEvent( int ); // CreateRecruitmentUI���� ȣ���ϴ� �Է� ���� �Լ�

private: 
    CompanyMember* nowLoginedMember;
    CreateRecruitmentUI* crUI;
};

#endif //_CREATERECRUITMENT_H
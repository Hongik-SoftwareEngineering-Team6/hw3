#ifndef MAX_STRING 
#define MAX_STRING 32
#endif

#ifndef _READRECRUITMENT_H
#define _READRECRUITMENT_H

#include "ReadRecruitmentUI.h"
#include "Member.h"
#include <string>

class ReadRecruitmentUI;

// 3.2 ��ϵ� ä�� ���� ��ȸ control class
class ReadRecruitment {

public:
    ReadRecruitment(MemberList* ml);    // ������
    void detectEvent(int);              // ReadRecruitmentUI���� ȣ���ϴ� ����� �Է� ������ ����Ǵ� �Լ�

private: 
    ReadRecruitmentUI* rrUI;
    CompanyMember* nowLoginedMember;
};

#endif //_READRECRUITMENT_H
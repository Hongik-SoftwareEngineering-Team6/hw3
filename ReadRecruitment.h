#ifndef MAX_STRING 
#define MAX_STRING 32
#endif

#ifndef _READRECRUITMENT_H
#define _READRECRUITMENT_H

#include "ReadRecruitmentUI.h"
#include "Member.h"
#include <string>

class ReadRecruitmentUI;

// 3.2 등록된 채용 정보 조회 control class
class ReadRecruitment {

public:
    ReadRecruitment(MemberList* ml);    // 생성자
    void detectEvent(int);              // ReadRecruitmentUI에서 호출하는 사용자 입력 감지시 수행되는 함수

private: 
    ReadRecruitmentUI* rrUI;
    CompanyMember* nowLoginedMember;
};

#endif //_READRECRUITMENT_H
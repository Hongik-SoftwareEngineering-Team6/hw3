/**
 * Project hw2
 */
#ifndef MAX_STRING 
#define MAX_STRING 32
#endif
#ifndef MAX_STRING 
#define MAX_STRING 32
#endif

#ifndef _READRECRUITMENTUI_H
#define _READRECRUITMENTUI_H

#include "ReadRecruitment.h"
#include <string>

using namespace std;
class ReadRecruitment;

// 3.2 등록된 채용 정보 조회 boundary class
class ReadRecruitmentUI {

public: 
    ReadRecruitmentUI(ReadRecruitment*);    // 생성자
    void userInput();                       //자기자신의 생성자에서 호출하는 사용자 입력 감지 함수
    void printRecruitmentInfo(char* work, int recruitingNumber, char* deadline); //ReadRecruitment에서 호출하는 채용공고 출력 함수

private: 
    ReadRecruitment* rrCtrl;

};

#endif //_READRECRUITMENTUI_H
#ifndef MAX_STRING 
#define MAX_STRING 32
#endif

#ifndef _CREATERECRUITMENTUI_H
#define _CREATERECRUITMENTUI_H

#include <string>
#include <iostream>
#include "CreateRecruitment.h"

using namespace std;

class CreateRecruitment;

// 3.1 채용 정보 등록 boundary class
class CreateRecruitmentUI {

public: 
    CreateRecruitmentUI(CreateRecruitment *c);      //생성자
    void inputRecuitmentAttribute();                //자기자신의 생성자에서 호출하는 사용자 입력 함수
    void getRecruitmentAttributes(char* work, int &recruitingNumber, char* deadline);     //CreateRecruitment에서 호출하는 사용자의 입력을 가져오는 함수
    void printRecruitmentInfo(char* work, int recruitingNumber, char* deadline);          //CreateRecruitment에서 호출하는 생성된 채용공고 출력 함수

private: 
    CreateRecruitment *crCtrl;
    char work[MAX_STRING], deadline[MAX_STRING];
    int recruitingNumber;

};

#endif //_CREATERECRUITMENTUI_H
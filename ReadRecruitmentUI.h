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

// 3.2 ��ϵ� ä�� ���� ��ȸ boundary class
class ReadRecruitmentUI {

public: 
    ReadRecruitmentUI(ReadRecruitment*);    // ������
    void userInput();                       //�ڱ��ڽ��� �����ڿ��� ȣ���ϴ� ����� �Է� ���� �Լ�
    void printRecruitmentInfo(char* work, int recruitingNumber, char* deadline); //ReadRecruitment���� ȣ���ϴ� ä����� ��� �Լ�

private: 
    ReadRecruitment* rrCtrl;

};

#endif //_READRECRUITMENTUI_H
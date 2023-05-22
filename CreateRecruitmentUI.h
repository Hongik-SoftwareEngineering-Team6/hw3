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

// 3.1 ä�� ���� ��� boundary class
class CreateRecruitmentUI {

public: 
    CreateRecruitmentUI(CreateRecruitment *c);      //������
    void inputRecuitmentAttribute();                //�ڱ��ڽ��� �����ڿ��� ȣ���ϴ� ����� �Է� �Լ�
    void getRecruitmentAttributes(char* work, int &recruitingNumber, char* deadline);     //CreateRecruitment���� ȣ���ϴ� ������� �Է��� �������� �Լ�
    void printRecruitmentInfo(char* work, int recruitingNumber, char* deadline);          //CreateRecruitment���� ȣ���ϴ� ������ ä����� ��� �Լ�

private: 
    CreateRecruitment *crCtrl;
    char work[MAX_STRING], deadline[MAX_STRING];
    int recruitingNumber;

};

#endif //_CREATERECRUITMENTUI_H
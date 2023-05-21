/**
 * Project hw2
 */

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

class CreateRecruitmentUI {
public: 

    CreateRecruitmentUI(CreateRecruitment *c);
    void inputRecuitmentAttribute();
    void getRecruitmentAttributes(char* work, int &recruitingNumber, char* deadline);   
    void printRecruitmentInfo(char* work, int recruitingNumber, char* deadline, char* companyName);

private: 
    CreateRecruitment *crCtrl;
    char work[MAX_STRING], deadline[MAX_STRING];
    int recruitingNumber;

};

#endif //_CREATERECRUITMENTUI_H
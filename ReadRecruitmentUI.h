/**
 * Project hw2
 */
#ifndef MAX_STRING 
#define MAX_STRING 32
#endif

#ifndef _READRECRUITMENTUI_H
#define _READRECRUITMENTUI_H

#include "ReadRecruitment.h"
#include <string>

using namespace std;
class ReadRecruitment;

class ReadRecruitmentUI {

public: 
    ReadRecruitmentUI(ReadRecruitment*);
    void userInput();
    void printRecruitmentInfo(char* work, int recruitingNumber, char* deadline);

private: 
    ReadRecruitment* rrCtrl;
};

#endif //_READRECRUITMENTUI_H
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
    
/**
 * @param ReadRecruitment*
 */
ReadRecruitmentUI(ReadRecruitment*);
    
/**
 * @param work
 * @param recruitingNumber
 * @param deadline
 * @param companyName
 */
void printRecruitmentInfo(string work, int recruitingNumber, string deadline, string companyName);
private: 
    ReadRecruitment* rrCtrl;
};

#endif //_READRECRUITMENTUI_H
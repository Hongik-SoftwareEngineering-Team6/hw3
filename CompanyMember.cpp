


#include "CompanyMember.h"

CompanyMember::CompanyMember(char* name, char* idNumber, char* id, char* password):Member(name, idNumber, id, password) {

}

RecruitmentInfo* CompanyMember::listRecruitment() {
    return this->recruitmentList[0];
}


RecruitmentInfo* CompanyMember::addNewRecruitment(char* work, int recruitingNumber, char* deadline) {
    char cName[MAX_STRING];
    this->getName(cName);
    static RecruitmentInfo ri(work, recruitingNumber, deadline, cName);
    this->recruitmentList[0] = &ri;
    return this->recruitmentList[0];
}


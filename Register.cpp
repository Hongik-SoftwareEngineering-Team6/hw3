#include "Register.h"

Register::Register(MemberList* myMemberList) {
    RegisterUI myRegisterUI;
    members = myMemberList;
    myRegisterUI.pRegister = this;
    myRegisterUI.startInterface();
}

void Register::createMember(int memberType, char* name, char* idNumber, char* id, char* password) {
    Member* pNewMember = NULL;

    // 회사회원 추가
    if (memberType == 1) { 
        pNewMember = new CompanyMember(name, idNumber, id, password);
        members->addMember(pNewMember);
    }
    // 일반회원 추가
    else if (memberType == 2) {
        pNewMember = new GeneralMember(name, idNumber, id, password);
        members->addMember(pNewMember);
    }
}
#include "Register.h"

Register::Register(MemberList* myMemberList) {
    RegisterUI myRegisterUI;
    members = myMemberList;
    myRegisterUI.pRegister = this;
    myRegisterUI.startInterface();
}

void Register::createMember(int memberType, char* name, char* idNumber, char* id, char* password) {
    Member* pNewMember = NULL;

    // ȸ��ȸ�� �߰�
    if (memberType == 1) { 
        pNewMember = new CompanyMember(name, idNumber, id, password);
        members->addMember(pNewMember);
    }
    // �Ϲ�ȸ�� �߰�
    else if (memberType == 2) {
        pNewMember = new GeneralMember(name, idNumber, id, password);
        members->addMember(pNewMember);
    }
}
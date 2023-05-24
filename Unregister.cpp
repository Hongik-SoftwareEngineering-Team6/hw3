#include "Unregister.h"

Unregister::Unregister(MemberList* myMemberList) {
    UnregisterUI myUnregisterUI; // UI ���� 
    members = myMemberList; // ���� �ý��ۿ� ����� ȸ������Ʈ attribute�� ����
    myUnregisterUI.pUnregister = this; // UI�� attribute�� ����
    myUnregisterUI.startInterface(); // UI ���� 
}

char* Unregister::deleteMember() {
    char deletedID[32];
    members->nowLoginedMember->getId(deletedID); // ���� �α������� ����� id(�� Ż����)
    members->deleteMember();
    return deletedID;
}
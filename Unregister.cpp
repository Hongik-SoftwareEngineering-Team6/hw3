#include "Unregister.h"

Unregister::Unregister(MemberList* myMemberList) {
    UnregisterUI myUnregisterUI; // UI 생성 
    members = myMemberList; // 현재 시스템에 저장된 회원리스트 attribute에 저장
    myUnregisterUI.pUnregister = this; // UI의 attribute에 저장
    myUnregisterUI.startInterface(); // UI 시작 
}

char* Unregister::deleteMember() {
    char* deletedID = members->nowLoginedMember->showID(); // 현재 로그인중인 멤버의 id(곧 탈퇴할)
    members->deleteMember();
    return deletedID;
}
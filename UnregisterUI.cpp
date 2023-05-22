#include "UnregisterUI.h"


void UnregisterUI::startInterface() {
    // 메모리 동적할당 후 null로 초기화
    char* deletedID = (char*)calloc(32, sizeof(char));

    // 해당 기능 수행  
    deletedID = deleteMember();

    // 출력 형식
    extern FILE* out_fp;
    fprintf(out_fp, "1.2. 회원탈퇴\n");
    fprintf(out_fp, "> %s\n", deletedID);
}

char* UnregisterUI::deleteMember() {
    return this->pUnregister->deleteMember();
}


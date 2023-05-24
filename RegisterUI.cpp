#include "RegisterUI.h"


void RegisterUI::startInterface() {
    int memberType = 0;
    char name[MAX_STRING], idNumber[MAX_STRING], id[MAX_STRING], password[MAX_STRING];
    extern FILE* in_fp, * out_fp;

    // 입력 형식 : 회원타입, 이름, 주민번호, ID, Password를 파일로부터 읽음
    fscanf(in_fp, "%d %s %s %s %s", &memberType, name, idNumber, id, password);

    // 해당 기능 수행  
    createMember(memberType, name, idNumber, id, password);


    // 출력 형식
    fprintf(out_fp, "1.1. 회원가입\n");
    fprintf(out_fp, "> %d %s %s %s %s\n\n", memberType, name, idNumber, id, password);
}

void RegisterUI::createMember(int memberType, char* name, char* idNumber, char* id, char* password) {
    this->pRegister->createMember(memberType, name, idNumber, id, password);
}


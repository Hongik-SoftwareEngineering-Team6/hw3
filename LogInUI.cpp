#include "LogInUI.h"

void LogInUI::startInterface() {
    char id[MAX_STRING], password[MAX_STRING];
    extern FILE* in_fp, * out_fp;

    // 입력 형식 : ID, Password를 파일로부터 읽음
    fscanf(in_fp, "%s %s", id, password);

    // 해당 기능 수행  
    requestLogIn(id, password);

    // 출력 형식
    fprintf(out_fp, "2.1. 로그인\n");
    fprintf(out_fp, "> %s %s\n", id, password);
}
void LogInUI::requestLogIn(char* id, char* password) {
    this->pLogIn->requestLogIn(id, password);
}
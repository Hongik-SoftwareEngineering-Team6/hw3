#include "LogInUI.h"

void LogInUI::startInterface() {
    char id[MAX_STRING], password[MAX_STRING];
    extern FILE* in_fp, * out_fp;

    // �Է� ���� : ID, Password�� ���Ϸκ��� ����
    fscanf(in_fp, "%s %s", id, password);

    // �ش� ��� ����  
    requestLogIn(id, password);

    // ��� ����
    fprintf(out_fp, "2.1. �α���\n");
    fprintf(out_fp, "> %s %s\n", id, password);
}
void LogInUI::requestLogIn(char* id, char* password) {
    this->pLogIn->requestLogIn(id, password);
}
#include "RegisterUI.h"


void RegisterUI::startInterface() {
    int memberType = 0;
    char name[MAX_STRING], idNumber[MAX_STRING], id[MAX_STRING], password[MAX_STRING];
    extern FILE* in_fp, * out_fp;

    // �Է� ���� : ȸ��Ÿ��, �̸�, �ֹι�ȣ, ID, Password�� ���Ϸκ��� ����
    fscanf(in_fp, "%d %s %s %s %s", &memberType, name, idNumber, id, password);

    // �ش� ��� ����  
    createMember(memberType, name, idNumber, id, password);


    // ��� ����
    fprintf(out_fp, "1.1. ȸ������\n");
    fprintf(out_fp, "> %d %s %s %s %s\n\n", memberType, name, idNumber, id, password);
}

void RegisterUI::createMember(int memberType, char* name, char* idNumber, char* id, char* password) {
    this->pRegister->createMember(memberType, name, idNumber, id, password);
}


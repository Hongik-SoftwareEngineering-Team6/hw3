#include "UnregisterUI.h"


void UnregisterUI::startInterface() {
    // �޸� �����Ҵ� �� null�� �ʱ�ȭ
    char* deletedID = (char*)calloc(32, sizeof(char));

    // �ش� ��� ����  
    deletedID = deleteMember();

    // ��� ����
    extern FILE* out_fp;
    fprintf(out_fp, "1.2. ȸ��Ż��\n");
    fprintf(out_fp, "> %s\n", deletedID);
}

char* UnregisterUI::deleteMember() {
    return this->pUnregister->deleteMember();
}


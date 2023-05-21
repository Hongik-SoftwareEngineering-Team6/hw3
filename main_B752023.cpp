#pragma warning(disable:4996)
// ��� ����
#include <stdio.h>
#include <string.h>
#include "CreateRecruitment.h"
#include "ReadRecruitment.h"
#include "CompanyMember.h"

// ��� ����
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// �Լ� ����
void doTask();
void join();
void program_exit();

// ���� ����
FILE* in_fp, * out_fp;
char temptMemberName[MAX_STRING] = "dankookTIGER";
char temptMemberIdNumber[MAX_STRING] = "3456";
char temptMemberid[MAX_STRING] = "hk";
char temptMemberpw[MAX_STRING] = "pwd1";
CompanyMember cm(temptMemberName, temptMemberIdNumber, temptMemberid, temptMemberpw);

int main()
{
	// ���� ������� ���� �ʱ�ȭ
    in_fp = fopen(INPUT_FILE_NAME, "r+");
    out_fp = fopen(OUTPUT_FILE_NAME, "w+");

	doTask();


	return 0;
}


void doTask()
{
    // �޴� �Ľ��� ���� level ������ ���� ����
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;



    while (!is_program_exit)
    {
        // �Է����Ͽ��� �޴� ���� 2���� �б�
        fscanf(in_fp, "%d %d ", &menu_level_1, &menu_level_2);


        // �޴� ���� �� �ش� ���� ����
        switch (menu_level_1)
        {
        case 1:
        {
            switch (menu_level_2)
            {
            case 1:   // "1.1. ȸ�����ԡ� �޴� �κ�
            {
                // join() �Լ����� �ش� ��� ���� 
               
                join();

                break;
            }
            case 2:
            {
                break;
            }
            }
            break;
        case 3:
        {
            switch (menu_level_2)
            {
            case 1:
            {
                CreateRecruitment cr;

                break;
            }
            case 2:
            {
                break;
            }
            }
            break;
        }
        case 6:
        {
            switch (menu_level_2)
            {
            case 1:   // "6.1. ���ᡰ �޴� �κ�
            {
                program_exit();
                is_program_exit = 1;
                break;;
            }
            }

        }
        }

        return;
        }
    }
}



void join()
{
    /*            !!!!!!!       �߿�        !!!!!!!!!
        * �ܼ��� ������ ���� ������ϴ� ����� ���̱� ���� �ڵ��̹Ƿ� �� �Լ����� �״�� ����ϸ� �ȵ�.
        * control �� boundary class�� �̿��ؼ� �ش� ����� �����ǵ��� �ؾ� ��.
        */

    char user_type[MAX_STRING], name[MAX_STRING], SSN [MAX_STRING],
        address[MAX_STRING], ID[MAX_STRING], password[MAX_STRING];

    // �Է� ���� : �̸�, �ֹι�ȣ, ID, Password�� ���Ϸκ��� ����
    fscanf(in_fp, "%s %s %s %s", name, SSN, ID, password);


    // �ش� ��� ����  

        // ��� ����
    fprintf(out_fp, "1.1. ȸ������\n");
    fprintf(out_fp, "%s %s %s %s\n", name, SSN, ID, password);
}


void program_exit()
{
    fprintf(out_fp, "���α׷� ����");
}
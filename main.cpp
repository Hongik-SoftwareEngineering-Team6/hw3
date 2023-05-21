// ��� ����
#include <iostream>
#include "Register.h"
#include "LogIn.h"
#include "Member.h"
#include "CreateRecruitment.h"
#include "ReadRecruitment.h"
#include "LogOut.h"

using namespace std;

// ��� ����
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// �Լ� ����
void doTask();
void program_exit();

// ���� ����
FILE* in_fp, * out_fp;

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
    MemberList* myMemberList = new MemberList();

    while (!is_program_exit)
    {
        // �Է����Ͽ��� �޴� ���� 2���� �б�
        fscanf(in_fp, "%d %d", &menu_level_1, &menu_level_2);

        // �޴� ���� �� �ش� ���� ����
        switch (menu_level_1)
        {
        case 1:
        {
            switch (menu_level_2)
            {
            case 1:   // "1.1. ȸ������" �޴� �κ�
            {
                new Register(myMemberList);
                break;
            }
            case 2:  // "1.2. ȸ��Ż��" �޴� �κ�
            {
                break;
            }
            }
            break; //level_1�� case1 break
        }
        case 2:
        {
            switch (menu_level_2)
            {
            case 1:   // "2.1. �α���" �޴� �κ�
            {
                new LogIn(myMemberList);
                printf("���� �α������� ����� "); myMemberList->nowLoginedMember->printID();
                break;
            }
            case 2:  // "2.2. �α׾ƿ�" �޴� �κ�
            {
                new LogOut(myMemberList);
                break;
            }
            }
            break; //level_1�� case2 break
        }
        case 3:
        {
            switch (menu_level_2)
            {
            case 1: // "3.1. ä�� ���� ���" �޴� �κ�
            {
                new CreateRecruitment(myMemberList);
                break;
            }
            case 2: // "3.2. ��ϵ� ä�� ���� ��ȸ" �޴� �κ�
            {
                new ReadRecruitment(myMemberList);
                break;
            }
            }
            break;
        }
        case 6:
        {
            switch (menu_level_2)
            {
            case 1:   // "6.1. ����" �޴� �κ�
            {
                program_exit();
                is_program_exit = 1;
                break;;
            }
            }
            break; // level_1�� case6 break
        }



        return; // ��
        }
    }
}


void program_exit()
{
    fprintf(out_fp, "6.1. ����\n");
}
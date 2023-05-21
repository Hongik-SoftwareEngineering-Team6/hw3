// 헤더 선언
#include <iostream>
#include "Register.h"
#include "LogIn.h"
#include "Member.h"
#include "CreateRecruitment.h"
#include "ReadRecruitment.h"
#include "LogOut.h"

using namespace std;

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void doTask();
void program_exit();

// 변수 선언
FILE* in_fp, * out_fp;

int main()
{
	// 파일 입출력을 위한 초기화
    in_fp = fopen(INPUT_FILE_NAME, "r+");
    out_fp = fopen(OUTPUT_FILE_NAME, "w+");

	doTask();


	return 0;
}

void doTask()
{
    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;
    MemberList* myMemberList = new MemberList();

    while (!is_program_exit)
    {
        // 입력파일에서 메뉴 숫자 2개를 읽기
        fscanf(in_fp, "%d %d", &menu_level_1, &menu_level_2);

        // 메뉴 구분 및 해당 연산 수행
        switch (menu_level_1)
        {
        case 1:
        {
            switch (menu_level_2)
            {
            case 1:   // "1.1. 회원가입" 메뉴 부분
            {
                new Register(myMemberList);
                break;
            }
            case 2:  // "1.2. 회원탈퇴" 메뉴 부분
            {
                break;
            }
            }
            break; //level_1의 case1 break
        }
        case 2:
        {
            switch (menu_level_2)
            {
            case 1:   // "2.1. 로그인" 메뉴 부분
            {
                new LogIn(myMemberList);
                printf("현재 로그인중인 멤버의 "); myMemberList->nowLoginedMember->printID();
                break;
            }
            case 2:  // "2.2. 로그아웃" 메뉴 부분
            {
                new LogOut(myMemberList);
                break;
            }
            }
            break; //level_1의 case2 break
        }
        case 3:
        {
            switch (menu_level_2)
            {
            case 1: // "3.1. 채용 정보 등록" 메뉴 부분
            {
                new CreateRecruitment(myMemberList);
                break;
            }
            case 2: // "3.2. 등록된 채용 정보 조회" 메뉴 부분
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
            case 1:   // "6.1. 종료" 메뉴 부분
            {
                program_exit();
                is_program_exit = 1;
                break;;
            }
            }
            break; // level_1의 case6 break
        }



        return; // 끝
        }
    }
}


void program_exit()
{
    fprintf(out_fp, "6.1. 종료\n");
}
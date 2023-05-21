#pragma once
#include <iostream>
#include "RecruitmentInfo.h"
using namespace std;

#ifndef MAX_STRING 
#define MAX_STRING 32
#endif

class Member {
private:
	// 메모리 동적할당 후 null로 초기화
	char* name = (char*)calloc(32, sizeof(char));
	char* idNumber = (char*)calloc(32, sizeof(char));
	char* id = (char*)calloc(32, sizeof(char));
	char* password = (char*)calloc(32, sizeof(char));
public:
	Member(char* _name, char* _idNum, char* _id, char* _password);
	bool checkLoginSuccess(char*, char*);
	void printID() { printf("id는 %s\n", this->id); }; //테스트 용 아이디출력


	void getName(char*);	//남지안 추가
};

class GeneralMember : public Member {
public:
	GeneralMember(char*, char*, char*, char*);
};

class CompanyMember : public Member {
public:
	CompanyMember(char*, char*, char*, char*);

	RecruitmentInfo* listRecruitment(); //남지안 추가
	RecruitmentInfo* addNewRecruitment(char* work, int recruitingNumber, char* deadline);//남지안 추가
private:
	RecruitmentInfo* recruitmentList[1];//남지안 추가
};

class MemberList {
private:
	Member* memberList[50];
	int numMembers;
public:
	MemberList() :numMembers(0) {};
	Member* nowLoginedMember;
	void addMember(Member*);
	bool checkLogIn(char*, char*);
};
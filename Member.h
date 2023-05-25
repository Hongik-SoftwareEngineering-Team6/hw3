#pragma once
#include <iostream>
#include "RecruitmentInfo.h"
using namespace std;



#ifndef MAX_STRING 
#define MAX_STRING 32
#endif

#ifndef _MEMBER_H
#define _MEMBER_H

class RecruitmentInfo;
class Member {
private:
	// 메모리 동적할당 후 null로 초기화
	char* name = (char*)calloc(32, sizeof(char));
	char* idNumber = (char*)calloc(32, sizeof(char));
	char* id = (char*)calloc(32, sizeof(char));
	char* password = (char*)calloc(32, sizeof(char));
public:
	Member(char* _name, char* _idNum, char* _id, char* _password);
	void deleteMemberInfo();
	bool checkLoginSuccess(char*, char*);

	void getName(char*);	
	void getId(char*);
	void getIdNumber(char*);
};



class GeneralMember : public Member {
public:
	GeneralMember(char*, char*, char*, char*);
	void apply(RecruitmentInfo* recruitmentInfo);
	int getApplicationNumber();	
	void getApplicationInfo(char* companyName, char* idNumber, char* work, int& recruitingNumber, char* deadline, int applicationNumber);
private:

	int applicationNumber;	// applicationNumber = 0으로 초기화
	// recruitment의
	//int applicationList[20];
	RecruitmentInfo* applicationList[20];	
};



class CompanyMember : public Member {
public:
	CompanyMember(char*, char*, char*, char*);

	RecruitmentInfo* listRecruitment(); 
	RecruitmentInfo* addNewRecruitment(char* work, int recruitingNumber, char* deadline);
private:
	RecruitmentInfo* recruitmentInfo;
};



class MemberList {
private:
	Member* memberList[50];
	int numMembers;
public:
	MemberList() :numMembers(0) {};
	Member* nowLoginedMember;
	void addMember(Member*);
	void deleteMember();
	bool checkLogIn(char*, char*);
	CompanyMember* searchCompanyMember(char* companyName);	// 이름으로 회사회원 찾아 반환
	CompanyMember* searchCompanyMemberByIdNumber(char* idNumber); // 사업자번호로 회사회원 찾아 반환
};

#endif //_MEMBER_H

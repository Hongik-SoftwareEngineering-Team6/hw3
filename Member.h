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
	// �޸� �����Ҵ� �� null�� �ʱ�ȭ
	char* name = (char*)calloc(32, sizeof(char));
	char* idNumber = (char*)calloc(32, sizeof(char));
	char* id = (char*)calloc(32, sizeof(char));
	char* password = (char*)calloc(32, sizeof(char));
public:
	Member(char* _name, char* _idNum, char* _id, char* _password);
	void deleteMemberInfo();
	bool checkLoginSuccess(char*, char*);
	char* showID() { return this->id; };

	void getName(char*);	
	void getId(char*);
	void getIdNumber(char*);
};



class GeneralMember : public Member {
public:
	GeneralMember(char*, char*, char*, char*);
	void apply(RecruitmentInfo* recruitmentInfo);	//������ �߰�, ����Ʈ �߰�, ������ ����
	int getApplicationNumber();	//������ �߰�
	void getApplicationInfo(char* companyName, char* idNumber, char* work, int& recruitingNumber, char* deadline, int applicationNumber);
private:
	// applicationNumber = 0���� �ʱ�ȭ
	int applicationNumber;
	// recruitment��
	//int applicationList[20];
	RecruitmentInfo* applicationList[20];	//������ ����
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
	CompanyMember* searchCompanyMember(char* companyName); //������ ȸ�� �̸����� ȸ�� ������ ��ȯ
	CompanyMember* searchCompanyMemberByIdNumber(char* idNumber); // ������ ����� ��ȣ�� ȸ�� ã��
};

#endif //_MEMBER_H
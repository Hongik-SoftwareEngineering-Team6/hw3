#pragma once
#include <iostream>
using namespace std;


class Member {
private:
	// �޸� �����Ҵ� �� null�� �ʱ�ȭ
	char* name = (char*)calloc(32, sizeof(char));
	char* idNumber = (char*)calloc(32, sizeof(char));
	char* id = (char*)calloc(32, sizeof(char));
	char* password = (char*)calloc(32, sizeof(char));
public:
	Member(char* _name, char* _idNum, char* _id, char* _password);
	bool checkLoginSuccess(char*, char*);
	void printID() { printf("id�� %s\n", this->id); }; //�׽�Ʈ �� ���̵����
};

class GeneralMember : public Member {
public:
	GeneralMember(char*, char*, char*, char*);
};

class CompanyMember : public Member {
public:
	CompanyMember(char*, char*, char*, char*);
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
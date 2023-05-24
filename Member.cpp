#include"Member.h"

Member::Member(char* _name, char* _idNumber, char* _id, char* _password) {
	// null�̾��� this�� attribute�鿡 ���� �� ���� ���� 
	strcpy(name, _name);
	strcpy(idNumber, _idNumber);
	strcpy(id, _id);
	strcpy(password, _password);
}

void Member::deleteMemberInfo() {
	name = NULL;
	idNumber = NULL;
	id = NULL;
	password = NULL;
}

bool Member::checkLoginSuccess(char* inputtedID, char* inputtedPW) {
	if (!strcmp(inputtedID, id) && !strcmp(inputtedPW, password)) {
		// ���̵�� ����� ���� ����� ���� ������ true ��ȯ
		return true;
	}
	return false;
}


void Member::getName(char* name) { //������ �߰�
	strcpy(name, this->name);
}

void Member::getId(char* id) {
	strcpy(id, this->id);
}

void Member::getIdNumber(char* idNumber) {
	strcpy(idNumber, this->idNumber);
}







void MemberList::addMember(Member* member) {
	memberList[numMembers++] = member;
	printf("ȸ�����ԿϷ�. ���� ȸ�� ���� %d\n", numMembers); // �׽�Ʈ �� �ܼ���� 
}


void MemberList::deleteMember() {
	for (int i = 0; i < numMembers; i++) {	
		char a[32];
		char b[32];
		cout << nowLoginedMember  << " " << memberList[i] << endl;
		nowLoginedMember->getId(a);
		memberList[i]->getId(b);
		if (!strcmp(a , b )) { // �α������� ����� id�� memberList�� �ִ� ȸ������ ������			
			nowLoginedMember->deleteMemberInfo(); // �ش� ����� ���� ����

			// ������ ����� �ε��� ����
			for (int j = i; j < numMembers; j++) {
				memberList[j] = memberList[j + 1];
			}
			
			numMembers -= 1; // ��ü ȸ�� �� -1			
			nowLoginedMember = NULL; // ���� �α��� ���� ��� ����

			printf("ȸ��Ż�� �Ϸ�. ���� ȸ�� ���� %d\n", numMembers); // �׽�Ʈ �� �ܼ����
			break;
		}
	}
}

bool MemberList::checkLogIn(char* id, char* password) {
	for (int i = 0; i < numMembers; i++) {		
		if (memberList[i]->checkLoginSuccess(id, password)) { // ���� id pw�� memberList�� �ִ� ȸ������ ������			
			nowLoginedMember = memberList[i]; // ���� �α��� ���� ����� ������Ʈ  
			return true;
		}
	}
}

CompanyMember* MemberList::searchCompanyMember(char* companyName) {
	cout << numMembers << endl;
	for (int i = 0; i < numMembers; i++) {
		char name[MAX_STRING];
		memberList[i]->getName(name);
		//cout << "searchCompanyMember"<< name;
		if (!strcmp(companyName, name)) {		//ȸ�� �̸��� ���ٸ�
			return (CompanyMember*)memberList[i];	//������ ��ȯ
		}
	}
}

CompanyMember* MemberList::searchCompanyMemberByIdNumber(char* idNumber) {
	for (int i = 0; i < numMembers; i++) {
		char num[MAX_STRING];
		memberList[i]->getIdNumber(num);
		if (!strcmp(idNumber, num)) {		//����� ��ȣ�� ���ٸ�
			return (CompanyMember*)memberList[i];	//������ ��ȯ
		}
	}
}
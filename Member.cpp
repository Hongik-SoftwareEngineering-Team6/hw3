#include"Member.h"

Member::Member(char* _name, char* _idNumber, char* _id, char* _password) {
	strcpy(name, _name);
	strcpy(idNumber, _idNumber);
	strcpy(id, _id);
	strcpy(password, _password);
}

bool Member::checkLoginSuccess(char* inputtedID, char* inputtedPW) {
	if (!strcmp(inputtedID, id) && !strcmp(inputtedPW, password)) { // strcmp:비교해서 같으면 0 반환
		return true;
	}
	return false;
}
GeneralMember::GeneralMember(char* name, char* idNumber, char* id, char* password) : Member(name, idNumber, id, password) {
}
CompanyMember::CompanyMember(char* name, char* idNumber, char* id, char* password) : Member(name, idNumber, id, password) {
}

void MemberList::addMember(Member* member) {
	memberList[numMembers++] = member;
	printf("현재 회원 수는 %d\n", numMembers);
}

bool MemberList::checkLogIn(char* id, char* password) {
	for (int i = 0; i < numMembers; i++) {
		if (memberList[i]->checkLoginSuccess(id, password)) {
			nowLoginedMember = memberList[i];
			return true;
		} 
	}
}
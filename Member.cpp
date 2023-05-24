#include"Member.h"

Member::Member(char* _name, char* _idNumber, char* _id, char* _password) {
	// null이었던 this의 attribute들에 들어온 값 깊은 복사 
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
		// 아이디와 비번이 들어온 값들과 각각 같으면 true 반환
		return true;
	}
	return false;
}


void Member::getName(char* name) { //남지안 추가
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
	printf("회원가입완료. 현재 회원 수는 %d\n", numMembers); // 테스트 용 콘솔출력 
}


void MemberList::deleteMember() {
	for (int i = 0; i < numMembers; i++) {	
		char a[32];
		char b[32];
		cout << nowLoginedMember  << " " << memberList[i] << endl;
		nowLoginedMember->getId(a);
		memberList[i]->getId(b);
		if (!strcmp(a , b )) { // 로그인중인 멤버의 id가 memberList에 있는 회원값과 같으면			
			nowLoginedMember->deleteMemberInfo(); // 해당 멤버의 정보 삭제

			// 나머지 멤버들 인덱스 조정
			for (int j = i; j < numMembers; j++) {
				memberList[j] = memberList[j + 1];
			}
			
			numMembers -= 1; // 전체 회원 수 -1			
			nowLoginedMember = NULL; // 현재 로그인 중인 멤버 없음

			printf("회원탈퇴 완료. 현재 회원 수는 %d\n", numMembers); // 테스트 용 콘솔출력
			break;
		}
	}
}

bool MemberList::checkLogIn(char* id, char* password) {
	for (int i = 0; i < numMembers; i++) {		
		if (memberList[i]->checkLoginSuccess(id, password)) { // 들어온 id pw가 memberList에 있는 회원값과 같으면			
			nowLoginedMember = memberList[i]; // 현재 로그인 중인 멤버로 업데이트  
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
		if (!strcmp(companyName, name)) {		//회사 이름이 같다면
			return (CompanyMember*)memberList[i];	//포인터 반환
		}
	}
}

CompanyMember* MemberList::searchCompanyMemberByIdNumber(char* idNumber) {
	for (int i = 0; i < numMembers; i++) {
		char num[MAX_STRING];
		memberList[i]->getIdNumber(num);
		if (!strcmp(idNumber, num)) {		//사업자 번호가 같다면
			return (CompanyMember*)memberList[i];	//포인터 반환
		}
	}
}
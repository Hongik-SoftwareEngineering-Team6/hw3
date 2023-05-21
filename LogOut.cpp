#include "LogOut.h"

LogOut::LogOut(MemberList* pMl) {
	this->pMemberList = pMl;
	LogOutUI loUI(this);
	this->pLoUI = &loUI;
}

void LogOut::requestLogOut() {
	char memberId[MAX_STRING] ;
	this->pMemberList->nowLoginedMember->getId(memberId);
	this->pMemberList->nowLoginedMember = NULL;
	this->pLoUI->printLogOut(memberId);
}
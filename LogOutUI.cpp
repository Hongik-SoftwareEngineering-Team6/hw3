#include "LogOutUI.h"

LogOutUI::LogOutUI(LogOut* pLo) {
	this->pLogOut = pLo;
	this->requestLogOut();
}

void LogOutUI::requestLogOut() {
	this->pLogOut->requestLogOut();
}

void LogOutUI::printLogOut(char* memberId) {
	extern FILE* out_fp;
	fprintf(out_fp, "2.2. ·Î±×¾Æ¿ô\n");
	fprintf(out_fp, "> %s\n\n", memberId);
}
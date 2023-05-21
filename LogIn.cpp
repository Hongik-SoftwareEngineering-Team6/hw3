#include "LogIn.h"

LogIn::LogIn(MemberList* myMemList) {
    LogInUI myLogInUI;
    members = myMemList;
    myLogInUI.pLogIn = this;
    myLogInUI.startInterface();
}
void LogIn::requestLogIn(char* id, char* password) {
    members->checkLogIn(id, password);
}
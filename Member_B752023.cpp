#include "Member.h"



Member::Member(char* name, char* idNumber, char* id, char* password ) {
	strcpy(this->id, id);
	strcpy(this->password, password);
	strcpy(this->name, name);
	strcpy(this->idNumber, idNumber);
}

Member::~Member() {

}

void Member::requestLogin() {

}

void Member::getName(char* name) {
	strcpy(name, this->name);
}
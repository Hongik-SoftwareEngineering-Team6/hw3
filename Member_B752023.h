/**
 * Project hw2
 */

#ifndef MAX_STRING 
#define MAX_STRING 32
#endif

#ifndef _MEMBER_H
#define _MEMBER_H

#include <string>
using namespace std;

class Member {
private: 
    char id[MAX_STRING];
    char password[MAX_STRING];
    char name[MAX_STRING];
    char idNumber[MAX_STRING];

public:
    
    Member(char* name, char* idNumber, char* id, char* password);
    void requestLogin();
    void getName(char*);

    ~Member();
};

#endif //_MEMBER_H
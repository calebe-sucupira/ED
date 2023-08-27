#pragma once

#include <string>

using namespace std;

struct User{
    string name;
    User* next;

    User(string _name, User* next = nullptr){
        name = _name;
        this->next = next;
    }
};
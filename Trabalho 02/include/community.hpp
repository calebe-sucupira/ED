#pragma once

#include <string>
#include "users.hpp"

using namespace std;

struct Community{
    string name;
    string creator;
    string description;
    Users users;
    Community* next;

    
    Community(string name, string creator, string description, Community* next = nullptr){
        this->name = name;
        this->creator = creator;
        this->description = description;
        users.addUser(creator);
        this->next = next;
    }
};
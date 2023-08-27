#pragma once

#include <string>
#include "user.hpp"

using namespace std;

class Users{
    private: 
        User* headUser;
        int numberUsers;
    public:
        Users();
        ~Users();
        void clear();
        void addUser(string name);
        void print();
        User* get_head();
        void removeName(string nameUser);
        int get_numberUsers();
};
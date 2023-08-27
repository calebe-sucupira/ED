#pragma once

#include <string>
#include "users.hpp"
#include "community.hpp"

using namespace std;

class Communities{
    private:
        Community* headCom;
    public:
        Communities();
        ~Communities();
        void clear();
        void addCommunity(string name, string _creator, string _description);
        void print();
        Community* get_head();
        void removeCommunity(string nameCommunity);

};
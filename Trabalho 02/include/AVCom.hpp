#pragma once

#include <string>
#include "users.hpp"
#include "communities.hpp"

using namespace std;

class AVCom{
    private:
    Communities communities;

    public:
    void includeCommunity(string nameCommunity, string nameUser);
    void printUsersCommunity(string nameCommunity);
    void printCommunities();
    void printCommunitiesUser(string nameUser);
    void removeUserCommunities(string nameUser);
    void _removeCommunity(string nameCommunity);
    void menu();
    void printNameCommunities();
    void printNames();
};
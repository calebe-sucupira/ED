#include "../include/communities.hpp"
#include "../include/community.hpp"
#include <iostream>

using namespace std;

Communities::Communities(){
    headCom = nullptr;
}
Communities::~Communities(){
    clear();
}
void Communities::clear(){
    while(headCom != nullptr){
        Community* temp = headCom;
        headCom = headCom->next;
        delete temp;
    }
}

Community* Communities::get_head(){
    return headCom;
}

void Communities::addCommunity(string name, string _creator, string _description){
    if(headCom == nullptr){
        Community* newCommunity = new Community(name, _creator,_description, nullptr);
        headCom = newCommunity;
    }
    else if(name < headCom->name){
        Community* newCommunity = new Community(name, _creator,_description, headCom);
        headCom = newCommunity;
    }else{
        Community* temp;
        Community* tempnext = headCom;
        while(tempnext != nullptr && name >= tempnext->name){
            temp = tempnext;
            tempnext = tempnext->next;
        }
        Community* newCommunity = new Community(name, _creator,_description, tempnext);
        temp->next = newCommunity;
    }
}

void Communities::removeCommunity(string nameCommunity){
    if(headCom->name == nameCommunity){
        Community* temp = headCom->next;
        delete headCom;
        headCom = temp;
    }else{
        Community* temp = headCom;
        Community* temp2 = temp->next;
        while(temp != nullptr && temp2->name != nameCommunity){
            temp = temp->next;
            temp2 = temp2->next;
        }
        temp->next = temp->next->next;
        delete temp2;
    }
}




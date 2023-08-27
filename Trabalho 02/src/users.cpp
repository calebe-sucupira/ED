#include "../include/users.hpp"

#include <iostream>

using namespace std;

Users::Users(){
    headUser = nullptr;
    numberUsers = 0;
}

Users::~Users(){
    clear();
}

void Users::clear(){
    while(headUser != nullptr){
        User* temp = headUser;
        headUser = headUser->next;
        delete temp;
    }
}

void Users::addUser(string name){
    if(headUser == nullptr){
        User* newuser = new User(name);
        headUser = newuser;
    }
    else if(name < headUser->name){
        User* newuser = new User(name, headUser);
        headUser = newuser;
    }else{
        User* temp;
        User* tempnext = headUser;
        while(tempnext != nullptr && name >= tempnext->name){
            temp = tempnext;
            tempnext = tempnext->next;
        }
        User* newuser = new User(name, tempnext);
        temp->next = newuser;
    }
    numberUsers++;

}

void Users::print(){
    if(this->headUser == nullptr){
        cout << "Lista de usuários vazia" << endl;
    }
    User* temp = this->headUser;
    while(temp != nullptr){
        cout << temp->name << endl;
        temp = temp->next;
    }
}

User* Users::get_head(){
    return headUser;
}

void Users::removeName(string nameUser){
    if(headUser->name == nameUser){
        User* temp = headUser->next;
        delete headUser;
        headUser = temp;
    }else{
        User* temp = headUser;
        User* temp2 = temp->next;
        while(temp != nullptr && temp2->name != nameUser){
            temp = temp->next;
            temp2 = temp2->next;
        }
        temp->next = temp->next->next;
        delete temp2;
    }
    numberUsers--;
}

int Users::get_numberUsers(){
    return numberUsers;

}
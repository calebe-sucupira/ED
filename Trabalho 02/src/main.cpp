#include <iostream>
#include <algorithm>
#include <cstring>

#include "../include/AVCom.hpp"

using namespace std;


int main(){

    AVCom communities;
    char op;
    while (1){
        communities.menu();
        cout << "Digite a opcao: ";
        cin >> op;
        cout << endl;

        if(op == '1'){
            string nameUser;
            string nameCommunity;
            cout << "Comunidade Disponiveis: ";
            communities.printNameCommunities();
            cout << endl;
            cout << "Digite o nome da comunidade em deseja incluir o usuario:" << endl;
            cin.ignore();
            getline(cin, nameCommunity);
            cout << endl;
            cout << "Digite o nome do usuario: " << endl;
            getline(cin, nameUser);
            cout << endl;
            transform(nameUser.begin(), nameUser.end(), nameUser.begin(), ::toupper);
            transform(nameCommunity.begin(), nameCommunity.end(), nameCommunity.begin(), ::toupper);


            communities.includeCommunity(nameCommunity, nameUser);
        }

        else if(op == '2'){
            cout << "Comunidades Cadastradas:" << endl;
            communities.printCommunities();
        }

        else if(op == '3'){
            string nameCommunity;
            cout << "Qual comunidade deseja excluir?: ";
            communities.printNameCommunities();
            cout << endl;
            cout << "Digite o nome da comunidade que deseja excluir:" << endl;
            cin.ignore();
            getline(cin, nameCommunity);
            transform(nameCommunity.begin(), nameCommunity.end(), nameCommunity.begin(), ::toupper);
            communities._removeCommunity(nameCommunity);
        }
        
        else if(op == '4'){
            string nameCommunity;
            cout << "De qual comunidade deseja listar os usuarios?: ";
            communities.printNameCommunities();
            cout << endl;
            cout << "Digite o nome da comunidade: " << endl;
            cin.ignore();
            getline(cin, nameCommunity);
            transform(nameCommunity.begin(), nameCommunity.end(), nameCommunity.begin(), ::toupper);
            communities.printUsersCommunity(nameCommunity);
        }

        else if(op == '5'){
            string nameUser;
            cout << "Usuarios: ";
            communities.printNames();
            cout << endl;
            cout << "Digite o nome do usuario:" << endl;
            cin.ignore();
            getline(cin, nameUser);
            transform(nameUser.begin(), nameUser.end(), nameUser.begin(), ::toupper);
            communities.printCommunitiesUser(nameUser);
        }
    
        else if(op == '6'){
            string nameUser;
            cout << "Usuarios: ";
            communities.printNames();
            cout << endl;
            cout << "Digite o nome do usuario: " << endl;
            cin.ignore();
            getline(cin, nameUser);
            transform(nameUser.begin(), nameUser.end(), nameUser.begin(), ::toupper);
            communities.removeUserCommunities(nameUser);
        }
        else if(op == '7'){
            break;
        }
        else{
            cout << "Essa opcao nao existe" << endl;
        }
    }


    
    
    

}
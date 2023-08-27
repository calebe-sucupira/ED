#include <string>
#include <iostream>
#include "../include/AVCom.hpp"

using namespace std;

void AVCom::includeCommunity(string nameCommunity, string nameUser){
    Community* temp = communities.get_head();
    while(temp != nullptr && temp->name != nameCommunity){
        temp = temp->next;
    }
    if(temp == nullptr){
        string description;
        cout << "Essa comunidade não exitia, você acabou de cria-la." << endl <<
        "Você precisa da uma descrição para sua comunidade" << endl;
        cout << "Descrição: ";
        getline(cin ,description);
        cout << "Comunidade criada!" << endl;
        communities.addCommunity(nameCommunity, nameUser, description);
    }else{
        cout << "Usuario incluido na comunidade!" << endl;
        temp->users.addUser(nameUser);
    }
    
}

void AVCom::printUsersCommunity(string nameCommunity){
    Community* temp = communities.get_head();

    while(temp != nullptr && temp->name != nameCommunity){
        temp = temp->next;
    }
    if(temp == nullptr){
        cout << "A cmonidade não existe" << endl;
        return;
    }
    temp->users.print();

}

void AVCom::printCommunities(){
    if(communities.get_head() == nullptr){
        cout << "Nenhuma comunidade cadastrada" << endl;
    }
    Community* temp = communities.get_head();
    while(temp != nullptr){
        cout << "Comunidade: " << temp->name << endl;
        cout << "Criador: " << temp->creator << endl;
        cout << "Descrição: " << temp->description << endl;
        cout << "Quantidade de Usuários: " << temp->users.get_numberUsers() << endl << endl;
        temp = temp->next;
    }
}

void AVCom::printCommunitiesUser(string nameUser){
    Community* temp = communities.get_head();
    while(temp != nullptr){
        User* temp2 = temp->users.get_head();
        while(temp2 != nullptr){
            if(temp2->name == nameUser){
                cout << temp->name << endl;
            }
            temp2 = temp2->next;
        }
        temp = temp->next;
    }
    
}

void AVCom::removeUserCommunities(string nameUser){
    Community* temp = communities.get_head();
    int count = 0;
    while(temp != nullptr){
        User* temp2 = temp->users.get_head();
        while(temp2 != nullptr && temp2->name != nameUser){
            temp2 = temp2->next;
        }
        if(temp2 == nullptr){
        
        }else{
            temp->users.removeName(nameUser);
            count++;
        }
        if(temp->users.get_numberUsers() == 0){
            communities.removeCommunity(temp->name);
        }
        temp = temp->next;
    }
    if(count > 0){
        cout << "Usuário remvovido." << endl;
    }
    else{
        cout << "Usuário não encontrado." << endl;
    }
}

void AVCom::_removeCommunity(string nameCommunity){
    Community* temp = communities.get_head();
    while(temp != nullptr && temp->name != nameCommunity){
        temp = temp->next;
    }
    if(temp == nullptr){
        cout << "Comunidade não Existe" << endl;
    }else{
        cout << "Comunidade Excluida!" << endl;
        temp->users.clear();
        communities.removeCommunity(nameCommunity);
    }
}

void AVCom::printNames(){
    Community* temp = communities.get_head();
    Users tempUsers;
    while(temp != nullptr){
        User* temp2 = temp->users.get_head();
        while(temp2 != nullptr){
            tempUsers.addUser(temp2->name); 
            temp2 = temp2->next;
        }
        temp = temp->next;
    }
    User* aux = tempUsers.get_head();
    User* auxNext = aux->next;
    while(auxNext != nullptr){
        if(aux->name == auxNext->name){
            tempUsers.removeName(aux->name);
        }
        aux = aux->next;
        auxNext = auxNext->next;
    }
    tempUsers.print();
    tempUsers.clear();
}

void AVCom::printNameCommunities(){
    if(communities.get_head() == nullptr){
        cout << "Nenhuma comunidade cadastrada. Crie uma comunidade." << endl;
    }
    Community* temp = communities.get_head();
    while(temp != nullptr){
        cout << temp->name << ", ";
        temp = temp->next;
    }

}

void AVCom::menu(){
    cout << "----------------------------------------------------------------------------------------------" << endl;
    cout << "1. Incluir usuario em uma comunidade." << endl;
    cout << "2. Listar comunidades." << endl;
    cout << "3. Excluir comunidade." << endl;
    cout << "4. Listar usuarios de uma comunidade." << endl;
    cout << "5. Listar todas comunidades de um usuario." << endl;
    cout << "6. Excluir um usuario de todas comunidades que participa." << endl;
    cout << "7. Sair." << endl;
    cout << "----------------------------------------------------------------------------------------------" << endl;
}
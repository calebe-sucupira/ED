#include <iostream>
using namespace std;

int conta_repetido(int v[], int n){
    int cont = 0;
    bool repete = false;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(v[i] == v[j] && repete == false){
                cont++;
                repete = true;
            }
        }
        repete = false;
    }
    
    return cont;
}
            

int main(){
    int tam;
    cin >> tam;
    
    int v[tam];
    for(int i = 0; i < tam; i++){
        cin >> v[i];
    }
    cout << conta_repetido(v, tam) << endl;
}
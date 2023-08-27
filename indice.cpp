#include <iostream>
using namespace std;


int bubblesort(int v[], int n){
    int v_aux[n];
    for (int i = 0; i < n - 1; i++){
        for (int j = n - 1; j > i; j--){
             if(v[j] < v[j - 1]){
                v_aux[j] = j;
                 int aux = v[j];
                 v[j] = v[j - 1];
                 v[j - 1] = aux;
                 
             }
         }
     }
     return v_aux;
}
int main(){
    int tam;
    cin >> tam;
    
    int v[tam];
    for(int i = 0; i < tam; i++){
        cin >> v[i];
    }

    cout << bubblesort(v, tam) << endl;
    
}
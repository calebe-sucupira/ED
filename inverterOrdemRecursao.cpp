#include <iostream>
using namespace std;

void inverte(float vetor[], int ini, int fim){

   
    else if(ini < fim){
    
        float aux = vetor[ini];
        vetor[ini] = vetor[fim];
        vetor[fim] = aux;

        inverte(vetor,ini + 1,fim - 1);
    }
    
}



int main(){
    float vetor[3] = { 33.222 , 17.222 , 44.222 };

    inverte(vetor, 0, 2);
    
    for(int i = 0; i < 3; i++){
        cout << vetor[i] << endl;
    }

}
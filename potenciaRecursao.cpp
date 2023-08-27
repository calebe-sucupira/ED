#include <iostream>
using namespace std;

int potencia(int k, int n){
    if(n == 0){
        return 1;
    }
    else{
        return k * potencia(k, n - 1) ;
    }
}

int main(){
    int k = 2;
    int n = 2;

    cout << potencia(k, n) << endl;
}
#include <iostream>
#include <math.h>
using namespace std;

int raizes(float a, float b, float c, float* x1, float* x2){
    float delta;
    delta = (b * b) - (4 * a * c);

    if(delta < 0){
        return -1;
    }

    else if(delta == 0){
        *x1 = (-b)/(2 * a);
        return 1;
    }

    else{
        *x1 = (-b + sqrt(delta))/(2 * a);
        *x2 = (-b - sqrt(delta))/(2 * a);
        return 2;
    }
    
}

int main(){

    float a, b, c, x1, x2 = 0.0;
    int aux = 0;
    
    cin >> a >> b >> c;
    aux = raizes(a, b, c, &x1, &x2);
    
    if(aux == -1){
        cout << "Não possui raizes reais!\n";
    }
    
    else if(aux == 1){
        cout << aux << "\n";
        cout << x1 << "\n";
        
    }
    else if(aux == 2){
        cout << aux << "\n";
        cout << x1 << "\n";
        cout << x2 << "\n";
        
    }
    
    return 0;
}
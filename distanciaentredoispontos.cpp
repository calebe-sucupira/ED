#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

struct ponto
{
    float x;
    float y;

};


int main(){

    float distancia;
    
    ponto p;
    cin >> p.x;
    cin >> p.y;

    distancia = sqrt((pow(p.x - 0, 2)) +(pow(p.y - 0, 2)));
    cout << fixed;
    cout << "a distancia é: "<< setprecision(2) << distancia <<  "\n";
    
}
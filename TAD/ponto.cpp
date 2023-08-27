#include <iostream>
#include "ponto.h"
#include <cmath>
#include <cstdio>
using namespace std;
ponto::ponto(int a, int b){
    x = a;
    y = b;
    dx = 0;
    dy = 0;
    dist = 0;
}
void ponto::coutPonto(){
    cout << "Ponto: (" << x << "," << y << ")" << endl;
}
ponto::~ponto(){
    cout << "Ponto destruido" << endl;
}
float ponto::distanciaponto(ponto a){
    dx = x - a.x;
    dy = y - a.y;
    dist = sqrt(pow(dx,2) + pow(dy,2));
    return dist;
}
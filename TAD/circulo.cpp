#include <iostream>
#include "circulo.h"
#include <cmath>
#include <cstdio>
using namespace std;

circulo* circulo::cria(int x, int y, int r){
    circulo* c;
    ponto p(x, y);
    c->centro = p;
    c->raio = r;
    return c;
}
void circulo::setRaio(circulo* c, int r){
    c->raio = r;
}
double circulo::getRaio(circulo* c){
    return c->raio;
}
ponto* circulo::getCentro(circulo* c){
    return &c->centro;
}
double circulo::area(circulo* c){
    return M_PI*pow(c->raio,2);
}
bool circulo::interior(circulo* c, ponto p){
    if(c->centro.distanciaponto(p) < c->raio){
        return true;
    }
    else{
        return false;
    }
}
#ifndef CIRCULO_H
#define CIRCULO_H
#include "ponto.h"

class circulo{
    private:
        float raio;
        ponto centro;
    public:
        circulo* cria(int x, int y, int r);
        void setRaio(circulo* c, int r);
        double getRaio(circulo* c);
        ponto* getCentro(circulo* c);
        double area(circulo* c);
        bool interior(circulo* c, ponto p);
};

#endif
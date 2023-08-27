#ifndef PONTO_H
#define PONTO_H
class ponto{
private:
    float x;
    float y;
    float dx;
    float dy;
    float dist;
public:
    ponto(int a, int b);
    ~ponto();
    void coutPonto();
    float distanciaponto(ponto a);
};
#endif
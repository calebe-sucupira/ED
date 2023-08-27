#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

struct ponto
{
    float x;
    float y;
};

struct retangulo
{
    ponto superior_esquerdo;
    ponto inferior_direito;
};

int main(){

    float base, altura, area, perimetro, diagonal;
    retangulo p_r;

    cin >> p_r.superior_esquerdo.x;
    cin >> p_r.superior_esquerdo.y;
    cin >> p_r.inferior_direito.x;
    cin >> p_r.inferior_direito.y;

    base = p_r.inferior_direito.x - p_r.superior_esquerdo.x;
	altura = p_r.superior_esquerdo.y - p_r.inferior_direito.y;
	
	area = base * altura;
	perimetro = 2 * (base + altura);
	diagonal = sqrt(pow(base, 2) + pow(altura, 2));

    cout << fixed;
    cout << "Área do Retângulo: "<< setprecision(2) << area << endl;
	cout << "Diagonal do Retângulo: "<< setprecision(2) << diagonal << endl;
	cout << "Perímetro do Retângulo: "<< setprecision(2) << perimetro << endl;
}
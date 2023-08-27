#include <iostream>
using namespace std;

struct alunos
{
    char nome_aluno[50];
    int matricula;
    float nota1;
    float nota2;
    float nota3;
};


int main(){
    
    alunos a[5];
    float notas = 0, maior_notas = 0;
    int j = 0;
    for(int i = 0; i < 5; i++){
        cin >> a[i].nome_aluno;
        cin >> a[i].matricula;
        cin >> a[i].nota1;
        cin >> a[i].nota2;
        cin >> a[i].nota3;

        notas = a[i].nota1 + a[i].nota2 + a[i].nota3;

        if(maior_notas < notas){
        
            maior_notas = notas;
            j = i;
        
        }
    }
        cout << "Nome: " << a[j].nome_aluno << endl;
        cout << "Nota01 "<< a[j].nota1 << endl;
        cout << "Nota02 "<< a[j].nota2 << endl;
        cout << "Nota03 "<< a[j].nota3 << endl;
}

     

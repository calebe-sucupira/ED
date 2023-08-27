#include <iostream>
using namespace std;

void minusculo(char* str){
    for(int i = 0; str[i]; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32;
        }
    }
}

int main(){
    char palavra[100];

    cin.get (palavra, 100);
    minusculo(palavra);
    cout << palavra << "\n";

    return 0;

}
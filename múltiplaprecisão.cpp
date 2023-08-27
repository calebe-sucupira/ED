#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std ;

int main () {
    int num; 

    cin >> num;
    double root = sqrt (num);
    cout << fixed ;
    for (int i = 0; i < 10; i++) {
        cout << setprecision (i) << root << "\n";
    } 
}
#include <iostream>
#include "dlistenc.h"
using namespace std;

int main(){
    DlistEnc v;
    v.add(2);
    v.add(4);
    v.add(6);
    v.print();
    DlistEnc c;
    c.add(7);
    c.add(8);
    c.add(9);
    c.print();
    v.juntar(c);
    v.print();
    cout << v._size() << endl;
    cout << v.search(6) << endl;
    v.remove();
    v.print();

}
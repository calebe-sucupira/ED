#include <iostream>
#include "cirdlistenc.h"
using namespace std;

int main(){
    CirDlistEnc v;
    v.add(2);
    v.add(4);
    v.add(6);
    CirDlistEnc c;
    c.add(7);
    c.add(8);
    c.add(9);
    v.print();
}
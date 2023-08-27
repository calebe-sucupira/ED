#include <iostream>
#include <vector>
#include "listSeq.h"
using namespace std;

int main(){
   ListSeq v;
   v.add(-1);
   v.add(3);
   v.add(2);
   v.add(5);
   v.add(10);
   v.add(0);
    cout << "size "<<v.size() << endl;
   v.add(11);
   v.add(11);
   v.add(0);
   v.add(0);
   v.add(-1);
   cout << "size "<<v.size() << endl;
   v.print();
   cout << "at "<<v.at(9) << endl;
   v.removeAt(0);
   v.print();
   v.removeElem(0);
   v.print();
   cout << "size "<<v.size() << endl;


}

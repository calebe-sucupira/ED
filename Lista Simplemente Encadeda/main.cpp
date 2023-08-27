#include <iostream>
#include "ListEnc.h"
using namespace std;

int main(){
    int v[] = {3, 4, 6};
    int n = 3;
    ListEnc list1(v,n);

    int v1[] = {1, 2, 3, 4};
    int n1 = 4;
    ListEnc list2(v1, n1);

    cout << list1.equals(list2) << endl;

    list1.concat(list2);
    list1.print();
    list1.reverse();
}
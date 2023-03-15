#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
    int m = -5;

    bitset<8> b1(n);
    bitset<8> b2(m);

    cout<<"Binary Representation of Positive 8 is: "<< b1 << endl;
    cout<<"Binary Representation of Negative 8 is: "<< b2 << endl ;

    return 0;
}
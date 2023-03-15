#include <iostream>
using namespace std;

int main(){
    int i, n, sum, a, b, c;
    n = 10;

    a = 0;
    b = 1;
    cout<<a << " " << b << " ";
    for(i = 0; i<=n; i++){
        c = a+b;
        cout<< c << " ";
        a = b;
        b = c;    
    }
}
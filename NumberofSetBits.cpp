#include <iostream>
using namespace std;

int setbits(int n){
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
int main(){
    int a, b;
    cin>> a >> b;

    cout << setbits(a) + setbits(b);
}
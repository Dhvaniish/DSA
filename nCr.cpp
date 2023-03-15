#include <iostream>
#include <math.h>

using namespace std;

int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }

    int product = 1;
    for(int i= 1; i<=n; i++){
        product = product * i;
    }
    return product;
}

int nCr(int n, int r){
    int ans;
    ans = (factorial(n))/(factorial(r)*(factorial(n-r)));
    return ans;
}

int main(){
cout << factorial(4) << endl;
cout << nCr(8, 2);
}
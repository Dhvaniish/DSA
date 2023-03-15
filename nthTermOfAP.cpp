#include <iostream>
using namespace std;

int nthTerm(int n){
    int term = 3 * n + 7;
    return term;
}
int main(){
    int n;
    cin >> n;

    cout<< "Nth Term is: " << nthTerm(n);
}
#include <iostream>
using namespace std;

int main(){
    int i, n, j;

    cout<<"enter n: ";
    cin>>n;

    i =1;
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<"*";
            j++;
        }
        cout << endl;
        i++;
    }
}

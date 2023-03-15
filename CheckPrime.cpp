#include <iostream>
using namespace std;

int main(){
    int i, n;
    cin>>n;
    bool Prime = 1;
    for(i = 2; i<n; i++){
        if(n%i == 0){
            Prime = 0;
            break;
        }        
    }

    if (Prime == 0){
        cout<<"Not a Prime";
    }
    else{
        cout<<"Is a Prime";
    }
}
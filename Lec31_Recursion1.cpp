#include<bits/stdc++.h>
using namespace std;

int factorial(int n){

    //base case
    if(n == 0)
        return 1;

    int small_problem = factorial(n-1);
    int bigger_problem = n * small_problem;

    return bigger_problem;
}

int main(){
    int n;
    cin>>n;

    int ans = factorial(n);
    cout<<ans<<endl;
return 0;
}
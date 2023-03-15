#include<bits/stdc++.h>
using namespace std;
int main(){
    int num = 5;
    int *ptr = &num;
    int a = *ptr;
    a++;
    cout<<num<<endl;
    cout<<*ptr<<endl;
    cout<<a<<endl;
return 0;
}
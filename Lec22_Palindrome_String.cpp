#include<bits/stdc++.h>
using namespace std;

bool palindromeString(char name[], int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(name[s]!=name[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

int getLength(char name[]){
    int count=0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cin>>name;
    cout<<"Your name is:"<<name<<endl;
    cout<<"Get Length:"<<getLength(name)<<endl;

    int len = getLength(name);
    //Uppercase and Lowercase letters are termed different
    cout<<"Your name is a Palindrome? "<<palindromeString(name, len)<<endl;

return 0;
}
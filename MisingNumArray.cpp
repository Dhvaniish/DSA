#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        int element;
        int previous;
        int next;
        sort(array.begin(),array.end());
        for(int i=0;i<n;i++){
            previous = array[]
            next= array[i+1];
            if(array[i]== next -1){
                continue;
            }
            else{
                element= array[i]+1;
                return element;
            }            
        }
    }
};


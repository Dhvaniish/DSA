#include<bits/stdc++.h>
using namespace std;

int Binary_Search(int arr[], int size, int key){
    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2;

    while(start <= end){
        if (arr[mid] == key){
            return mid;
        }

        if(key > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return -1;
}

int main(){
    int even[5] = {2,4,6,8,10};
    int odd[5] = {1,3,5,7,9};

    cout<<Binary_Search(even, 5, 10);

    return 0;
    }
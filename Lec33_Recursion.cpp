#include<bits/stdc++.h>
using namespace std;

// bool isSorted(int *arr, int size){
//     //base case
//     if(size == 0 || size == 1){
//         return true;
//     }

//     if (arr[0] > arr[1])
//         return false;
//     else {
//         bool remainingPart = isSorted(arr+1, size-1);
//         return remainingPart;
//     }
// }

int sumArray(int *arr, int size){

    //base case
    if(size == 0)
        return 0;
    if(size == 1)
        return arr[0];
    else{
        int sum, remainingPart;
        remainingPart = sumArray(arr+1, size-1);
        sum = arr[0] + remainingPart;
        return sum;
    }
}

int main(){
    int arr[5] = {2,4,6,8,9};
    int size = 5;

    int ans = sumArray(arr, size);

    cout<<ans<<endl;

    return 0;
}
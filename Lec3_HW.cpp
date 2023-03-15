#include <iostream>
using namespace std;

int main(){
    int i, n;
    int sum = 0;

    cout << "enter n: ";
    cin >> n;
    for (i = 0; i < n; i++){
        if (i%2 == 0){
            sum += i;
        }
    }

    cout << sum;
}
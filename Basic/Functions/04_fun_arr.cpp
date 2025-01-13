#include<iostream>
using namespace std;

// array is always pass by reference

void doSomething(int arr[], int n){
    arr[0] += 100;
    cout << "Value inside function: " << arr[0] << endl;
}
int main(){
    const int n = 5;
    int arr[n] = {1, 2,45, 5, 3};
    for(int i= 0; i<= n - 1; i++){
        cout << i << " ";
        cout << arr[i] << endl;
    }
    doSomething(arr, n);
    cout << "Value inside int main: " << arr[0] << endl;

    return 0;
}
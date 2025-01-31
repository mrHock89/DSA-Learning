#include<iostream>
using namespace std;

void print3(int n){
    // for(int i = 0; i < n; i++){
     for(int i = 1; i <= n; i++){
        // for(int j = 0; j <= i; j++){
        for(int j = 1; j<= i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
void print4(int n){
    // for(int i = 0; i < n; i++){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
        // for(int j = 0; j <= i; j++){
            cout << i << " ";
            // cout << i + 1 << " ";
        }
        cout << endl;
    }
}
void print5(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
}
void print6(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i; j++){
            cout << j +1 << " ";
        }
        cout << endl;
    }
}

void print7(int n){
    for(int i = 0; i < n; i++){
        // space
        for(int j = 0; j < n - i - 1; j++){
        cout << " ";
        }
        // star
        for(int j = 0; j < 2 * i + 1; j++){
            cout << "*";
        }
        // space
        for(int j = 0; j < n - i - 1; j++){
        cout << " ";
        }
        cout << endl;
    }
}
void print8(int n){
    for(int i = 0; i < n; i++){
        // space
        for(int j = 0; j < i ; j++){
        cout << " ";
        }
        // star
        for(int j = 0; j <2*n - (2 * i + 1); j++){
            cout << "*";
        }
        // space
        for(int j = 0; j < i ; j++){
        cout << " ";
        }
        cout << endl;
    }
}
void print10(int n){
    for(int i = 1; i <= 2*n -1; i++){
        int stars = i;
        if(i > n) stars = 2*n -i;
        for(int j = 1; j <= stars; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void print11(int n){
    int start =1;
    for(int i= 0; i< n; i++){
        if(i % 2 == 0) start = 1;
        else start = 0;
        for(int j = 0; j <= i; j++){
            cout << start;
            start = 1- start;
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int num;
        cin >> num;
        // print3(num);
        // print4(num);
        // print7(num);
        print11(num);
    }
}

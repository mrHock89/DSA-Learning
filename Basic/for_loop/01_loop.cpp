#include<iostream>
using namespace std;

int main(){
    // for loop
    for(int i = 1; i <= 10; i++){
        cout << i << endl; // 1 2 3 4 5 6 7 8 9 10
    }

    // while loop
    int j = 1;
    while(j <= 10){
        cout << j << " ";
        j++;
    }

    cout << endl;
    // do-while loop
    // we use do-while where we do not know the condition and code will execute minimum 1 time
    int k = 1;
    do{
        cout << k << " ";
        k++;
    }while (k <=10);
    
    
    return 0;
}
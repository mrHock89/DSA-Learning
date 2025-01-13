#include<iostream>
using namespace std;

int sum(int num1,int num2){
    return num1 + num2;
}
int main(){
    int num1 = 23;
    int num2 = 34;
    cout << "The sum of num1 and num2 is: " << sum(num1, num2);
    return 0;
}
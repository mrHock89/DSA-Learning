#include<iostream>
using namespace std;

// int sum(int num1,int num2){
//     return num1 + num2;
// }
void sum(int num1,int num2){
    int sum =  num1 + num2;
    cout << sum;
}
int main(){
    int num1 = 23;
    int num2 = 34;
    sum(num1, num2);
    return 0;
}
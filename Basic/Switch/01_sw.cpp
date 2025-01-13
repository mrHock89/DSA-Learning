#include<iostream>
using namespace std;

int main(){
    int dayNo;
    cout << "Enter day number: ";
    cin >> dayNo;
    switch(dayNo){
        case 1: cout << "Monday";
            break;
        case 2: cout << "Tuesday";
            break;
        case 3: cout << "Wednesday";
            break;
        case 4: cout << "Thursday";
            break;
        case 5: cout << "Friday";
            break;
        case 6: cout << "Saterday";
            break;
        case 7: cout << "Sunday";
            break;
        default: cout << "You have entered wrong day no";
            break;
    }
    return 0;
}
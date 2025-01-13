#include<iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if(age < 18){
        cout << "You are not eligble for job";
    } else if(age >= 18 && age <= 54){
        cout << "Eligible for the job.";
    } else if( age >= 55 && age <= 57) {
        cout << "Eligible for job, but retirement soon.";
    } else {
        cout << "Retirement time";
    }
    return 0;
}
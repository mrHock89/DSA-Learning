#include<iostream>
using namespace std;

// Functions are set on code which perfeorms someting for us
// Functions are used to modularise code
// Readability
// Reusability
// Types
// void --> does not returns anything
// return
// parameterised
// non perameterised

// void
void printName(){
    cout << "Hey Guys!";
}
// parameterised

void printName2(string name){
    cout << name;
}
int main(){
    printName();

    string name;
    cin >> name;
    printName2(name);
    return 0;
}
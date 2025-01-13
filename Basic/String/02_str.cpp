#include<iostream>
using namespace std;

int main(){
    string myName = "Anirban Roy";
    cout << myName << endl;

    // Just like array stores elements as index string too
    cout << myName[2] << endl;
    // Length of a string

    cout << myName.size() << endl;
    cout << sizeof(myName) << endl;

    // last char
    cout << myName[myName.size() - 1] << endl;
    // changing a element
    myName[myName.size() -1] = 'o';
    cout << myName[myName.size() - 1] << endl;
    cout << myName;
    return 0;
}
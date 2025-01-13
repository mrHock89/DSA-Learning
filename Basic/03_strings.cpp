#include<bits/stdc++.h>
using namespace std;

int main(){
    // There it will take only one string

    string str1, str2;
    cin >> str1 >> str2;
    cout << str1 << " "<< str2 << endl; // Hello Anirban

    // Taking hole string as a sentence like
    // using getline
    string fullSent;
    getline(cin, fullSent); // How are you? 
    cout << fullSent;
    return 0;
}
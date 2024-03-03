#include<iostream>
// #include<bits/stdc++.h>

using namespace std; 



void printfirstpatterm (int n) { 

    for (int i=0; i<n; i++){
        for (int j=0; j<n;  j++){
            cout << "*"; 
        }
        cout << "\n"; 
    }
}


int main() { 
    int bro; 
    cin >> bro; 
    printfirstpatterm(bro); 
}
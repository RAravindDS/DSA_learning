#include<iostream>
// #include<bits/stdc++.h>

using namespace std; 



int add(int a, int b ) {
    int answer = a + b; 
    return answer; 
}


int main() { 
    int a, b; 
    cin >> a >> b; 
    int c =  add(a, b); 
    cout << c; 
    return 0; 
}
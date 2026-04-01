/*
Q =>Reverse a Number,Write a program to generate the reverse of a given number N.
Print the corresponding reversed number

->Note:
->If a number has trailing zeros, they should not appear in the reversed number.
Example: Reverse of 10400 → 401
*/

//=>my code
#include<bits/stdc++.h>
using namespace std;

void reverseno(int n){
    
    int RN =0;
    while (n>0)
    {
      int lastdigit = n % 10;
      n = n/10;
      RN = (RN*10) + lastdigit;
    }
    
    cout<< RN;
}

int main(){
    int n;
    cin>> n;
    reverseno(n);
}
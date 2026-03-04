#include<bits/stdc++.h>
using namespace std;

void pattern8(int n){
       for (int i = 1; i <= n; i++)
       {
// pehle spaces k liye print kro

        //spaces
        for (int j = 1; j <= i-1; j++){

            cout<< " ";
        }
        //stars
        for (int j = 1; j <= 2*(n-i)+1; j++)
        {
            cout<< "*";
        }
        
        cout<< endl;
        
       }
       
}


int main(){
    int n;
    cin>> n;
    pattern8(n);
}
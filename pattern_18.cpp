#include<bits/stdc++.h>
using namespace std;

void print18(int n){
     for (int i = 1; i <= n; i++)
     {
        char start ='A' + (n-i);

        for (char ch = start; ch <= 'A' +n -1; ch++)
        {
            cout<< ch;
        }
        cout<< endl;
     }
     
}


int main(){
    int n =5;
    print18(n);
}
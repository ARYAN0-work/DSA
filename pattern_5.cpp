#include<bits/stdc++.h>
using namespace std;

void print5(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i+1; j++)
        {
            cout<< "*";
        }
        cout<< endl;// you accidentaly remove this and it becomes infinte loop
    }
    
}



int main(){
    int n;
    cin>>n;
    print5(n);
}
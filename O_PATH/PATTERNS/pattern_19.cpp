#include<bits/stdc++.h>
using namespace std;

void print19(int n){

    for (int i = 1; i <= n; i++)
    {
        // left stars
        for (int j = 1; j <= n-i+1; j++)
        {
            cout<< "*";
        }

        // spaces
        for (int j = 1; j < 2*(i-1); j++)
        {
            cout<<" ";
        }
        
        // right stars
        for (int j = 1; j <= n-i+1; j++)
        {
            cout<< "*";
        }
        cout<< endl;
        
    }
    
    //Second half
    for (int i = 1; i <= n; i++)
    {
        //left stars
       for(int j = 1; j <= i; j++)
       {
          cout << "*";
       }  

        // spaces
        for(int j = 1; j <= 2*(n - i); j++)
        {
            cout << " ";
        }
        
        // right stars
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    
}



int main(){
    int n =5;
    print19(n);
}
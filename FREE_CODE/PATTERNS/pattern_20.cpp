#include<bits/stdc++.h>
using namespace std;

void print20(int n){
        // above pattern
        for (int i = 1; i <= n; i++)
        {
            //left stars
            for (int j = 1; j <= i; j++)
            {
                cout<< "*";
            }
            
            // spaces
            for (int j = 1; j <=2*(n-i); j++)
            {
                cout<< " ";
            }
            
            //right stars
            for (int j = 1; j <=i ; j++)
            {
                cout<< "*";
            }
            cout<< endl;

        }   
            
            // below pattern 
        for (int i = n-1; i >= 1; i--)
        {
            //left stars
            for (int j = 1; j <= i; j++)
            {
                cout<< "*";
            }
            
            // spaces
            for (int j = 1; j <=2*(n-i); j++)
            {
                cout<< " ";
            }
            
            //right stars
            for (int j = 1; j <=i ; j++)
            {
                cout<< "*";
            }
            cout<< endl;
        
        }
        
}


int main(){
    int n =5;
    print20(n);
}
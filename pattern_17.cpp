#include<bits/stdc++.h>
using namespace std;

void pattern17(int n){
    for(int i = 1; i <= n; i++){
        
        for (int j = 1; j <= n-i-1; j++)
        {
            cout<<" ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout<< char('A'+j);
        }

        for (int j = i-1; j >=0; j--)
        {
            cout<< char('A'+j);
        }
        
        
        
    }
}

int main(){

    int n = 5;
    pattern17(n);

}
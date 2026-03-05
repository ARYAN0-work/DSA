#include<bits/stdc++.h>
using namespace std;

void pattern16(int n){
           for (int i = 1; i <= n; i++)
           {
            for (int j = 1; j < i; j++)
            {
                cout<< char('A'+j);
            }
                cout<<endl;
           }
           
}

int main(){

    int n = 5;
    pattern16(n);

}
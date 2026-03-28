#include<bits/stdc++.h>
using namespace std;

void pattern15(int n){
    for (int i = n; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout<< char('A' + j);
        }
        
        cout << endl;
    }
    
}




int main(){

    int n = 5;
    pattern15(n);

}
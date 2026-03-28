// dont miss columns

#include <bits/stdc++.h>
using namespace std;

void pattern1(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
        {
            cout<< " *";// dont fporget <<
        }
        cout << endl;  // if ypu remove this => this prionts * * * * * * * * * * * * * * * * * * * * * * * * *
    }
    
}

int main(){
    int n;
    cin>>n;
    pattern1(n);// forget ;
    return 0;
}
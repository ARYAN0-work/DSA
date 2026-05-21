#include<bits/stdc++.h>
using namespace std;

void print11(int n){
    for (int i = 1; i <= n; i++)
    {
        int num =i% 2;

        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num = 1 - num;
        }

        cout << endl;
    }
    
}

int main(){
    int n;
    cin>> n;
    print11(n);
}
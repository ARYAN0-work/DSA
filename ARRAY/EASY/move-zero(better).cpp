#include<bits/stdc++.h>
using namespace std;

vector<int> moveZeros(int n, vector<int>a){

    // s-1[o(n)]
    vector<int>temp;
    for (int i = 0; i < n; i++)
    {
        if (a[i]!=0)
        {
            temp.push_back(a[i]);
        }
    }

    // s-2[o(x)]
    int nz = temp.size();
    for (int i = 0; i <nz; i++)
    {
        a[i]=temp[i];
    }
    
    // s-3[o(n-x)]
    for (int i = 0; i < n; i++)
    {
        a[i] =0;
    }
    
    return a;
    
}
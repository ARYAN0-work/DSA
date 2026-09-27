#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    //precompute => for (upper+lower) case
    int hash[26] ={0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]-'a']++;
    }
    
    int q;
    cin >> q;
    while (q--){
        char c;
        cin >> c;
        cout << hash[c-'a']  << endl;
    }
    
}

// input
/*
5
a
g
h
b
c
*/

// output
/*
2
0
1
2
1
*/
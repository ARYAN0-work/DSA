#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;

    int arr[n];
    unordered_map<int,int>mpp;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        //o(n)
        mpp[arr[i]]++;
    }

    // pre-compute

    //iterate in the map
    for (auto it :mpp)
    {
        cout << it.first<< "->" << it.second <<endl;
    }
    
    
    
    int q;
    cin >> q;
    while (q--){
        int number;
        cin >> number;
        //fetch
        cout << mpp[number]<< endl;
    }
    
}


// input
/*
7
1 2 3 1 3 2 12
5 
1
2
3
4
12
*/

// output
/*
3->2
12->2
2->2
1->2
2
2
2
0
1
*/
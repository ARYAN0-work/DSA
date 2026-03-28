#include <bits/stdc++.h>
using namespace std;

void explainMultimap(){ // you can add duplicate keys
    // everything same as map, only it can store multiple keys
    // only mpp[key] cannot be used here 
}

void explainUnorderedMap(){ //  it will not be in sorted but it will have unique keys
    // same as set asnd undorded_Set diffrence.
}

bool comp(pair<int,int>p1, pair<int,int>p2){
    if (p1.second< p2.second)
    {
     return true;
    } else if(p1.second == p2.second){
        if(p1.first>p2.second) return true;
    }
    return false;
}

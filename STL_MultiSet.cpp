#include <bits/stdc++.h>
using namespace std;

void explainMulstiSet(){// only obeys SORTED
    // everything is same as set
    // only stores duplicate elements also

    multiset<int>ms;
     ms.insert(1); // {1}    
     ms.insert(1); // {1,1}
     ms.insert(1); // {1,1,1}
     
     ms.erase(1); // all 1's erased

     int cnt = ms.count(1);// counts the no. of 1 in multiset

     //only a single one erased
     ms.erase(ms.find(1));// jsut find that one and delete it

     ms.erase(ms.find(1),ms.find(1)+2);// if you dont want to erase all the occurance you only want to delete one 1
     // for this go the adress not the element
     // means go for the iterator

     //rest all function same as set
}

void explainUSet(){// always time complexity bogoh of 1
    unorderd set<int> st; // it only omits unique=> means randomise order
    // lower_bound and upper_bound function
    // does not works, rest all functions are same
    // as above, it does nnot stores in any
    //particular order it has a better complexity
    //than set in most cases, except some when collision happens
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> st;
    //=> erase(start,end)
    // {1, 4}
    st.erase(5); // erases 5 // takes logarithmic time

    int cnt = st.count(1);// if it exist it will have 1 occurance and if it doent exist it will have zero

    // you can give the el to be erased or the iterator to be erased

    auto it = st.find(3);
    st.erase(it);// it takes constant time

    // {1,2,3,4,5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1,it2); //after erase{1,4,5} {first, last}

    // lower_bound() and upper_bound() function works in the same way
    // as in vector it does..

    //This is the syntax
    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);
}
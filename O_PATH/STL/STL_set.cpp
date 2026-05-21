#include<bits/stdc++.h>
using namespace std;

//set => sorted & unique
void explainSet() {
    set<int> st;

    st.insert(1);   // {1}
    st.insert(2);   // {1, 2}
    st.insert(2);   // {1, 2} // not uniq not store
    st.insert(4);   // {1, 2, 4}
    st.insert(3);   // {1, 2, 3, 4} // sorted order
    // it a linear container no , a tree is maintned

    // Functionality of insert in vector
    // can be used also, that only increases
    // efficiency

    // begin(), end(), rbegin(), rend(), size(),
    // empty() and swap() are same as those of above

    // {1, 2, 3, 4, 5}
    auto it = st.find(3); // returns the iterator which points to 3[address]

    // {1, 2, 3, 4, 5}
    auto it = st.find(6);// if element is not in the set it will always return set.end() which means it points to right after the end [ last vale element k baad ka ]


    
}
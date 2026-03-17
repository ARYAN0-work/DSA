/*
-let us assume we need to store 5 variables so we create arr[5] but then we we want to add one more but we cant bcz we declared arr[5] thats when arr came
-when you dont know the size you needed use vectors
*/
#include<bits/stdc++.h>
using namespace std;

void explainVector(){

    vector<int> v; // vector | data-type | variable => it creates an empty container

    v.push_back(1); // that empty container gonna take one into it 
    v.emplace_back(2); // simpilar to push-back but only faster then it


    vector<pair<int, int>>vec;// declaring a pair of vector 

    vec.push_back({1,2});// you have to use it like this {1,2}
    v.emplace_back(1,2);// you can use it like (1,2) this also  

    vector<int>v(5,100); // it is like this {100,100,100,100,100}

    vector<int> v(5);// it is like this {0,0,0,0,0} =>even after this you can add something and push back 

    vector<int>v1(5,20); // {20,20,20,20,20}
    vector<int> v2(v1); // v2 will be a similar container but a copy of v1 {20,20,20,20,20}=> it is dynamic in nature
}

// => CONFUSION IN LINE 19
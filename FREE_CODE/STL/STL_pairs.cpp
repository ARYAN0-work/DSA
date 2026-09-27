#include<bits/stdc++.h>
using namespace std;


//Pairs => it is a part of utility library

/*
In C++, a utility library is a standard library that provides small helper tools (utilities) that make programming easier. It doesn’t do one big job — it provides useful building blocks.

One of those tools is pair, which is why in the video he says “pair is part of the utility library.”
*/

void explainPair(){
    pair<int,int> p ={1,3};// i want to store couple of integers => store it in a pair , 1st no; integer = same for second

    cout<< p.first << " " << p.second; //same as js
    
// p is acting as a variable you can declare it twice but not as same

    pair<int,pair<int,int>> p2 ={1,{3,4}};// nested property of pair => can store more than two no. in a pair
    
  cout << p.first << " " << p2.second.second << " " << p2.second.first; // nested property access method

    pair<int, int> arr[] = { {1,2}, {2,5}, {5,1}}; //declaring pair array it lies inside utility library

    cout<< arr[1].second;// access {2,5} => indexing k baises pe hota hai

}
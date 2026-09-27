#include <bits/stdc++.h>
using namespace std;

//ROLL NO. EX IN CLASS
//=> map is a datastructure in which roll no. is the unique keys and the values can be the name = it cannhave unique keys
// and key can be any data-type similarly value it can be anything 

void explainMap() {// map store unique keys in sorted order

    map<int, int> mpp;  //map<key, value> mpp;

    map<int, pair<int, int>> mpp;// key is int and value is two int

    map<pair<int, int>, int> mpp;// key is two int and value is one int

    mpp[1] = 2;// on the key 1 store value 2       |{1,2}    |
    mpp.emplace({3, 1});//                         |{2,4}    |
    mpp.insert({2, 4});//                          |{3,1     |
                       //                          |_________|
    mpp[{2, 3}] = 10;// line no.14

    /*
    {
      [{1, 2},{2, 4}, {3, 1}] => use iterator from start to end 
       it   ->    it  ->   it
    }
    */

     for (auto it : mpp) {
        cout << it.first << " " << it.second << endl;// method how to print each value in map => in a sorted order of key
    }

    cout << mpp[1]; // it says 2
    cout << mpp[5]; // it says null but it will print 0

    auto it =mpp.find(3);// it will give the iterator/address {3,1}
    cout << *(it).second; // it will print the value * will give the element and . gives second
    auto it = mpp.find(5); // 5 is not there so it will points towards mp.end = after the map

    //This is the syntax
    auto it = mpp.lower_bound(2); // see the video in the desxription

    auto it = mpp.upper_bound(3);

    //erase, swap, size, empty, are same as above 
}

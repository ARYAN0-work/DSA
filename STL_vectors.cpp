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

/*
now how do you access elements in your vector=> we do it like array
=> and the other way is iterator(It basically means point to the memory address) 

*/
vector<int>::iterator it = v.begin();// METHOD OF USING ITERATOR => vec<DATATYPE>:: ITERATIR | VARIABLE AND V.BEGIN(pointing to memory address not the element )

/*
int t = 20;// address 10855
v.begin => 10855
*(v.begin) => 20
*/
it++; // it moves to the next memo
cout<< *(it)<< " "; // in C++ in order to access memory address element we write star => by the way it will print the 2nd stored element which is in varible it

it =it+2; // total shifted three postion

vector<int>::iterator it =v.end();// iterator will point at a place  write after the last element => if you want that this iterator will move to last element you have to do it -- after using v.end

//=> never used
vector<int>::iterator it =v.rend(); // it will do the same as end but from start

vector<int>::iterator it =v.rbegin();// it will point to last element

cout << v[0]<< " " << v.at(0);// we dont use v.at stuff rather then we use v[] stuff
cout << v.back() << " ";// the element whcih is at the last plave


//=> now there are couple of ways to print a vector
// => loop or use of itterator
for(vector<int>::iterator it =v.begin(); it != v.begin(); it != v.end(); it++){
    cout<< *(it) << " "; // this is how you can print the entire vectors
}

for(auto it = v.begin(); it !=v.end(); it++){ //for time save => use auto(automatically assigns to a vector=> you dont need to define the datatype, according to the data the datatype is automatically assigned)
    cout<< *(it)<< " ";
}

// other way use for each loop

for(auto it:v){// for each it on v; its like
    // {10,20,30}
    // {it,it,it} => nott an iterator it gets int
    cout << it << " ";


// => delertion in a vector
// {10,20,12,23}
v.erase(v.begin()+1);// begin + 1 means 20; so it wu=ill delete 20

// .erase(iterator) this iterator is location of element

//{10,20,12,23,35} => if you want to delete more then 1 element
v.erase(v.begin()+ 2, v.begin() + 4); // // {10,20,35} {start,end}=> {beign+2, begin+4}

// Insert function=> if you wanna insert something

//=> i want to insert 300 right at the start
vector<int>v{2,100};// {100,100}
v.insert(v.begin(),300);// {300,100,100}=> at th begining
v.insert{v.begin()+ 1,2,10;};//{300,10,10,100,100} => this will atke 2 10 and insert at 2nd place 

//not requierd much
vector<int> copy(2,50); // {50,50} => we have a vector 50,50 name copy
v.insert(v.begin(),copy.begin, copy.end()); // {50,50,300,10,100,100} => way to inserrt a vector inside other vector

// {10, 20}
cout << v.size(); //2 => give how many elements are there in a vector

//{10,20}
v.pop_back(); // {10} => pops out the last eleement

// v1 -> {10, 20}
// v2 -> {30,40}
v1.swap(v2); // v1 -> {30,40} , v2 -> {10,20} => swaps the vect

v.clear(); // erases the entire vector => prints it down to emoty a vector

cout << v.empty(); // acts like a boolean it prints true(if vectir is emoty) and false(if vector is false)

}
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

// DAY 3

//list is similar to vectors but it gives front operations
//list dynamic in nature

// in vectors we use insert whuch is damn too costlier => take time
// list is internal operations which is doubly lingilist like a doublylinkedlist is maintned for a list & for vector a single linkedlist is maintned

// in comparision to time complexity list is very cheap
void explainList(){
    list<int> ls;

    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2,4}
    ls.push_front(5); // {5,2,4}

    ls.emplace_front(); {2,4};

    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap => all similar
}

// => exactly similar to LIST & VECTORS
void explainDegue(){ 
    deque<int>dq;
    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1,2}
    dq.push_front(4); // {3, 4, 1, 2}

    dq.pop_back(); // {3,4,1}'
    dq.pop_front(); // {4,1}

    dq.back();

    dq.front();

    //rest functions same as vector
    //begin, end, rbegin, rend, clear, insert, size, swap 
}

//=> stack ; LIFO = last in first out ; the guy who come first go out last
// indexing access is not allowed   
// in stack there is only three fn => push, pop, top => all the operation are bigoh of 1

void explainStack(){
    stack<int> st;
    st.push(1); //{1}
    st.push(2); //{2,1} // box filled like this ______|
    st.push(3); //{3,2,1}
    st.push(3); //{3,3,2,1}
    st.emplace(5); // {5,3,3,2,1}
    
    cout<< st.top(); // prints 5 "** st(2) is invalid **" // it gives 5 but 5 is still in stack

    st.pop();// st looks like {3,3,2,1} // it gives 5 but delete it in stack

    cout << st.top(); //3 // now if i do this it will give 3 bcz 5 is deleted
    cout << st.size(); //4 // it will give no. of elements in stack
    cout << st.empty(); // it will tell us its falls no the stack isnt empty

    stack<int>st1,st2; // declare 2 stackes 
    st1.swap(size); // swap those 2 stacks 
    
}


//Similarr to Stack => and it is equal to FIFO[first in fitst out ]

void explainQueue(){// box filled like this |_____
    queue<int> q ;
    q.push(1); // {1}
    q.push(2); // {1,2}
    q.emplace(4); // {1,2,4
    
    q.back() += 5; // back will mean 4 only 

    cout << q.back(); // prints 9
    
    // Q is {1,2,9} => manipulate the last no.

    cout << q.front(); //prints 1 => this prints doesnt delete

    q.pop(); // {2,9} // deletes the 1st no

    cout << q.front();// prints 2

    //size swap entry same as stack
}

// PRIORTY[max heap] => THE GUY WHO HAS THE LARGEST VALIE STAYS AT THE TOP => DATA IS NOT STORED IN LINEAR WAY

// most of the time push top pop

// min priorty[min priorty] priorty ka ulta

void explainPQ() {

    priority_queue<int> pq;

    pq.push(5);      // {5}
    pq.push(2);      // {5, 2}           |10 |
    pq.push(8);      // {8, 5, 2}        |8  |
    pq.emplace(10);  // {10, 8, 5, 2}    |5  |

    cout << pq.top(); // prints 10

    pq.pop();         // {8, 5, 2}

    cout << pq.top(); // prints 8


    // size, swap, empty function same as others


    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(5);      // {5}
    pq.push(2);      // {2, 5}
    pq.push(8);      // {2, 5, 8}
    pq.emplace(10);  // {2, 5, 8, 10}

    cout << pq.top(); // prints 2
}

// TIME COMPLEXITY OF PUSH AND POP = LOG(N) & TOP BIGOH(1)


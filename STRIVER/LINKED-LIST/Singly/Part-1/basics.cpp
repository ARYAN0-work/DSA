// constructor is special type of member fn used to intalize objects of the class in the self-fefined object 
#include<bits/stdc++.h>
using namespace std;
struct Node { // you dont have oops ffor struct so tackling these replace struct with class and it will work 

// its a user defined data type => Node is the name of our structure.
//"Whenever I write Node, I am referring to this custom data type."

    public:// the only diffrence its public 
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
    // wee might can have multiple constructor
    Node(int data1) {
        data = data1;
        next = nullptr;// now you don't have to write nullptr again again in Node*y
    }
};

int main() {
    vector<int> arr = {2, 5, 8, 7};
    Node*y = new Node(arr[0],nullptr); // new => gives you the memory lika a pointer to the memory location and then you can store it 



    //but if you do this
    Node y = Node(arr[0],nullptr);// it will throw an error bcz its an object its just storing arr[0] and a nullptr
    //cout<<y;// error;
    //it will do this althouh
    cout <<y.data;// arr[0]
    cout <<y.next;// 0

    // but if you do this =>
    Node*y = new Node(arr[0],nullptr);// here y is a pointer

    // you can't do this => 
    cout <<y.data;
    cout <<y.next;
    // you have do this 
    cout << y-> next; //itt will give these two value
    cout << (*y)->data;

}

/*
aryan@LAPTOP-JKAF7PUH:~/DSA/STRIVER/LINKED-LIST/INTRO$ ./a.out
0x59c92701f2d0
*/


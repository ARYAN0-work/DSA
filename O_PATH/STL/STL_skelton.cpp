#include<bits/stdc++.h>//library => containg all library
#include<math.h>// math library

using namespace std;

void print(){// doesnt return something => "This function does not send a value back to the place where it was called."

    cout << "raj";
}

int sum(int a, int b){ // return a + b
    return a+b ;
}

int main(){// main fn
    print();// calling print 
    int s = sum(1,5);// passing 1 and 5 in sum fn
    //prints 6
    cout << s;
    return 0;
}



/*
=> yhe whole stl 
= algo
= containers
= iterators
= functions
*/
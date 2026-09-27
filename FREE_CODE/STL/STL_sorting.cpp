#include <bits/stdc++.h>
using namespace std;

// always analyze everything while writting a comprator => all the cases => do in terms of pairs not in terms of array or pairs and analyze pairs
bool comp(pair<int,int>p1, pair<int,int>p2){
    if (p1.second< p2.second) return true;      // { p1 }__{ p2 }
    if (p1.second< p2.second) return false; 
}// so what comprator internally do is swap the the elemnts

//SORT
// {1,5,4,2} => {1,2,4,5}



// let us assume they give me a buuble sort now i want to sort it
void explainExtra(){
    int n;
    sort(a, a+n);// now you dont have to use bubble or any other sort just use stl
    sort(v.begin(), v.end()); // sort(starting itt, ending itt)
 
//=> by this you can sort  any container not map => arr or vect

   // sort(a+2,a+4);// sort(start,end) like [start,end]
     
    sort(a+2,a+4); // now i want only {1,3,5,2} to be sorted now what if i want to sort them in descending order
    sort(a, a+n, greater<int>); // just do this for descending grator<int> is a comprator
}
// we know till here how to sort in asccendinga nd descending


// sort in myway => its gonna use a lot
    pair<int,int> a[] = {(1,2), {2,1}, {4,1}};

    //MYWAY => which is a comp[its a self written comprator] and this comprator is a boolean fn above it is written how to write it
    //sort it according to incrreasing second element  => which 2,1,1
    //if second element is same, then sort {2,1} , {4,1}, {1,2}
    //if according to first element but in descending => acc to it {4,1} at first and {2,1} at 2nd

    sort(a, a+n, comp);// we need comprator for myway

    // {4,1}, {2,1}, {1,2};

    int num =7;
    int cnt =_builtin_popcount();// how many setbits are there

    long long num = 16576578687;
    int cnt =_builtin_popcountll();

    string s = "123";
    sort(s.begin(), s.end()); // thats how you can start

    do{
        cout<< s << endl;// its like a loop
    } while (next_permutation(s.begin(), s.end()));// now i want all the permutation of 123
    {
        int maxi = *max_elements(a,a+n);// now how you want max elements
    }

int main(){
    return 0;
}
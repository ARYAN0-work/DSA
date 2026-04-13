#include<bits/stdc++.h>
using namespace std;

void digit(int n){
    int count;
    while(n>0){
     int rem = n%10;
     n= n/10;

    int count= (rem*10) + rem;
    }
    cout << count;
}

int main(){
  int n;
  cin>> n;
  digit(n);
}

/*  => logic feel ho gya but how did they made the formula  see that
145

n%10

5 c

digit = n*10 + c
*/

// theres a lot of problem in this see again 


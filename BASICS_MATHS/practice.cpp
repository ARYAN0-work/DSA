#include<bits/stdc++.h>
using namespace std;

void digit(int n){

int count = 0;

  while (n>0){ // forget about the loop => the problem

       //int lasDigit =n%10; forget about this completly
        n = n/10;
       count = count +1;
  }
  cout << count;

  int digits = ((int)log10(n)) +1; // forget this formula and int likna in front of log

  cout << count;// ye likhna bhul gye the
}

int main(){
  int n;
  cin>> n;
  digit(n);
}


/*
actually the code big brother told is better see later why 
*/
/*
Palindrome Number

Problem Statement:

Write a program to determine if the given number is a palindrome or not.
Print true if it is a palindrome, false otherwise.

A palindrome number is a number for which the reverse is exactly the same as the original number.

Example:
121 → Palindrome
*/
/*
#include<bits/stdc++.h>
using namespace std;

int palindrome(int n){
    int dup =n;
    int count = 0;
    while(n>0){
      int remainder= n%10;
      n=n/10;

      count = (count*10) + remainder;
    }
    if (dup == count)
    {
        cout << "true";
    }
    else
    {
        cout<< "false";
    }
    return 0;
}

int main(){
    int n;
    cin>> n;
    palindrome(n);}
*/

#include<bits/stdc++.h>
using namespace std;

void digit(int n){
   int count =0;
   int dup =n;
   while (n>0)
   {
    int remainder=n%10;
     count =(count*10)+remainder;
     n=n/10;
     //count++; update nhi karni
   }
   
   if (dup==count)
   {
     cout<< "yes";
   }
   else
   {
    cout<<"no";
   }
     
   

}

int main(){
  int n;
  cin>> n;
  digit(n);
}
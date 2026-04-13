/*
Problem: 

Given an integer 'n', return the number of digits present in the number.

Example:
Input: n = 156
Output: 3

Explanation:
156 has 3 digits.

*/

/*
#include<bits/stdc++.h>
using namespace std;

void countDigit(int n){
    while (n>0)
    {
        int number = n% 10;
        int digit1 = n/10;
    }
    
    cout<< 
}

int main() {
    int n;
    cin>> n;
    countDigit(n);
}

*/

// Just put the cout variable her the no. of times the extraction happens that is the number of times the digit will be i can say cout = cout +1 the logic of extraction of digits if i can do this can i say i will ne the able to count the no.

// another way to find log10(7789) = 3.81
// 3.81 + 1 = 4.89[ integer =4] ANS

// TC = O(log10(N)) => you sae the n is going to didvisible by 10 how many times is it gonna divisible by 10  => TC [lastdigit, cout = unit operation=> no. very large] = O(log10(N)) 

// one  more thing if no. is divible by 5 => TC = O(log5(N))

//if no. is divible by 7 => TC = O(log7(N))

//=> if no. of iteration is based on division[n=n/10] the tc will be log

/*
#include<bits/stdc++.h>
using namespace std;

void countDigit(int n){
    int cnt = (int)(log10(n)) +1;
}

int main() {
    int n;
    cin>> n;
    countDigit(n);
}

*/

//#include<bits/stdc++.h>
//using namespace std;
//
//void countDigit(int n){
//    int cnt =0;
//    while (n>0)
//    {
//        int lastDigit =n %10;
//        cnt = cnt + 1;
//        n= n/10;
//    }
//    //  return cnt;     mistake void hai return nhi karega change to int countDigit or do this =>
//
//    cout<< cnt;
//}
//
//int main() {
//    int n;
//    cin>> n;
//    countDigit(n);
//}

#include<bits/stdc++.h>
using namespace std;

void digit(int n){
      int count=0;
      while (n>0)// not using while loop using if else statment on that place
      {
      //  n=n/10; ye 3rd line pe rahega
      //  int rem=n%10;
      //  count=count+1;

          int lastDigit =n %10;
          count = count + 1;// can use count ++
          n= n/10;
      }
      
      
      cout<<count;
  
}

int main(){
    int n;
    cin>>n;
    digit(n);
}


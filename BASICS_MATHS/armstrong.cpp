// ARMSTRONG NUMBER
/*
371 = 3*3*3 + 7*7*7 + 1*1*1 = 371 yep
1634 = 1*1*1 + 6*6*6 + 3*3*3 + 4*4*4 = 1634 yep
35 = 3*3*3 + 5*5*5 = 134 nop
*/

/*
PSEUDO CODE =>

  dup =N
  sum =0
  while(N>0){    
   last digit =N % 10  | 7789%10 | 778 % 10
   su, = sum + (dup*dup*dup)
   N =N/10      | 7789/10=778 | 778 /10

   
   revnum=(revnum*10) + last digit  | 9 | 98 [CC karke dekhle]

   if (sum == dup) YES
   else ()
  }

*/

#include<bits/stdc++.h>
using namespace std;

void armstrong(int n){
    int dup = n;
    int sum = 0;
    while (n>0)// yha pr bus n>0 ki jagah dup>0 lga diya tha
    {     
          int lastdigit = n%10;
          n= n/10;
          sum = sum + (lastdigit*lastdigit*lastdigit);
    }
    if (sum == dup)
    {
       cout<< "itsa armstrong no.";
    }
    else
    {
        cout<< "its not a armstrong no.";
    }
    
}


int main(){
    int n;
    cin>> n;
    armstrong(n);
}
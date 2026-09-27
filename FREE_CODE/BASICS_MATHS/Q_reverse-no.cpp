/*
Q =>Reverse a Number,Write a program to generate the reverse of a given number N.
Print the corresponding reversed number

->Note:
->If a number has trailing zeros, they should not appear in the reversed number.
Example: Reverse of 10400 → 401
*/

//=>my code
//#include<bits/stdc++.h>
//using namespace std;
//
//void reverseno(int n){
//    
//    int RN =0;
//    while (n>0)
//    {
//      int lastdigit = n % 10;
//      n = n/10;
//      RN = (RN*10) + lastdigit;
//    }
//    
//    cout<< RN;
//}

//int main(){
//    int n;
//    cin>> n;
//    reverseno(n);
//}

//#include<bits/stdc++.h>
//using namespace std;
//
//void digit(int n){
//      int count=0;
//      while (n>0){
//       // int remainder =remainder%10; not using n
//       // n=n/10;
//       // count= (count*10)+remainder; 
//       // count ++ count aapne aap + ho rha hai bee
//       int remainder =remainder%10; 
//        n=n/10;
//        count= (count*10)+remainder; 
//        count ++ ;
//
//      }
//
//      cout<< count;
//}  
//
//int main(){
//    int n;
//    cin>>n;
//    digit(n);
//}
//
//OR

#include<bits/stdc++.h>
using namespace std;

void digit(int n){
      int count = int((log10(n))+1);
      cout<<count;
    }
int main(){
    int n;
    cin>>n;
    digit(n);
}

/*
Reverse a Number Code

Typical logic:

while(n > 0) {
    int lastDigit = n % 10;
    rev = rev * 10 + lastDigit;
    n = n / 10;
}
🧠 Why Time Complexity = O(log₁₀ n)
👉 Key idea:

Each iteration does:

n = n / 10;

So the number keeps shrinking like:

n → n/10 → n/100 → n/1000 → ... → 0
🔍 How many steps?

Let’s say:

n = 12345  (5 digits)

Iterations:

12345 → 1234 → 123 → 12 → 1 → 0

👉 Total steps = 5

💥 General Case

Number of digits in n =

log
⁡
10
(
𝑛
)
log
10
	​

(n)

So loop runs:

𝑂
(
log
⁡
𝑛
)
O(logn)
⚡ Intuition (very important)
Bigger number → more digits
More digits → more iterations
Digits ≈ log₁₀(n)
🔥 Final Answer

👉 Time Complexity = O(log₁₀ n)
👉 Space Complexity = O(1)

🧠 One-line takeaway (remember this)

Whenever a number is divided by 10 repeatedly → complexity becomes log n
*/
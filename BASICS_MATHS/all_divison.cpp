// now we want print all the divisor of no . in order
// 36 -> 1,2,3,4,6,9,12,18,36

// point the divsior or factor gonna lie between 1 and n itslf= means loop from 1 to n

// if i is completly dividng n = remainder(0)

// TC -> O(N) = HOW 
// for loop se n mila and baaki unit operation hai 

/*
for(i=1;i<=N;i++){
   if(N%i ==0)
   print(i);
}
*/

#include<bits/stdc++.h>
using namespace std;

void divison(int n){
      for (int i = 1; i <= n; i++){
          //(i%n==0) mistake
        if (n%i==0){
            cout<< i << " ";
        }
        
      }
      
}


int main(){
    int n;
    cin>> n;
    divison(n);
    return 0;
}

/*MISTAKE

🔍 What your code is doing

Your function:

void divison(int n){
    for (int i = 1; i <= n; i++){
        if (i % n == 0){
            cout << i;
        }
    }
}
❌ The mistake

You wrote:

if (i % n == 0)

But it should be:

if (n % i == 0)
🧠 Why this is wrong

You want to find divisors of n.

👉 Definition:
A number i is a divisor of n if:

n % i == 0

But you wrote:

i % n == 0

That means:
👉 “i is divisible by n” — which is almost never true (except when i = n)

💡 Example

Let’s say:

n = 6
Your condition:
i % 6 == 0

Check values:

1 % 6 ≠ 0 ❌
2 % 6 ≠ 0 ❌
3 % 6 ≠ 0 ❌
6 % 6 = 0 ✅

👉 Output: 6 only

Correct condition:
6 % i == 0

Check values:

6 % 1 = 0 ✅
6 % 2 = 0 ✅
6 % 3 = 0 ✅
6 % 4 ≠ 0 ❌
6 % 5 ≠ 0 ❌
6 % 6 = 0 ✅

👉 Output: 1 2 3 6 ✅

*/
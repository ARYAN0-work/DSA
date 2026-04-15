// # prime no => which has two factors only 1 and itslef
// prime no. => 1 and itslef wrong bcz 1 is prime by itself

// using brute force => the first algo which comes to ouyr mind using that

/*  extreme brute forch approch
cout ==0
for(i=1; i<=N; i++){  //tc = o(n) | baki sub unit operat  // if it is a factor it will remainder 0
}
if(N%i ==0)
cout++;
}
if(cout ==2) tick
else not tick
*/


// also all the factors can be found in square root of n => save tc [ run for sqrt(n)]
/*  BETTER METHOD
cout ==0
for(i=1; i*i<=n; i++){  //tc = n baki sub unit operat
}
if(N%i ==0) THAT IS DEFINETLY A FACTOR
cout++;
}
if((n/i)!=i) IF THE OTHER FACTOR IS DIFFRENT
court++;
}
if(cout == 2) tick
else no ticl
*/  
#include<iostream>
using namespace std;

//It is checking:

//“How many numbers divide n?”
int main() {
    int n;
    cin >> n;
    int cnt = 0;

    for(int i = 1; i*i <= n; i++) {
        if(n % i == 0) {
            cnt++;
            if((n / i) != i) cnt++;
        }
    }

    if(cnt == 2) cout << "true";
    else cout << "false";
}
/*
Good — then we simplify it properly. No overload. Just clear.

🧠 What your code is trying to do
👉 It is checking:

“How many numbers divide n?”

If:


Only 2 numbers divide n (1 and n) → ✅ Prime


More than 2 → ❌ Not prime



🔥 Let’s take ONE example slowly
👉 Example: n = 6
We run:
for(int i = 1; i * i <= n; i++)
👉 Means:
i goes from 1 → √6 (~2)So i = 1, 2 only

🔁 Step 1 → i = 1
Check:
6 % 1 == 0 ✅
So:


Factor = 1


Pair = 6/1 = 6


👉 We found 2 factors
cnt = 2

🔁 Step 2 → i = 2
Check:
6 % 2 == 0 ✅
So:


Factor = 2


Pair = 6/2 = 3


👉 Again 2 factors
cnt = 4

🔚 Loop ends
Because next i = 3:
3 * 3 = 9 > 6 ❌ stop

✅ Final result
cnt = 4
👉 Factors of 6:
1, 2, 3, 6
👉 More than 2 → ❌ Not prime

⚡ Now SAME logic for prime
👉 Example: n = 5
Loop:
i = 1 → √5 (~2)

i = 1
5 % 1 == 0 → (1,5)cnt = 2

i = 2
5 % 2 != 0 → skip

✅ Final
cnt = 2 → PRIME

🔥 ONE LINE SUMMARY (lock this)

For every i, you get 2 factors: i and n/i
*/

/*
Your question

How does i * i <= n save time complexity?

🧠 First understand the brute force

You were doing:

for(int i = 1; i <= n; i++)

👉 This runs n times
👉 Time complexity = O(n) ❌

🔍 Now the key observation

Factors always come in pairs

Example:
n = 36

Pairs:

(1, 36)
(2, 18)
(3, 12)
(4, 9)
(6, 6)

👉 Notice:
After √n, factors repeat in reverse

🎯 So what happens?

Instead of going till n, we go till:

i * i <= n

👉 which means:

i <= √n
⚡ Why this saves time
Approach	Loop runs till	Time Complexity
Brute	n	O(n) ❌
Optimized	√n	O(√n) ✅
🔥 Example

n = 36

Brute → 36 iterations
Optimized → only 6 iterations

👉 Massive reduction

🧠 How we still get all factors

Inside loop:

if(n % i == 0) {
    cnt++;              // i
    if((n / i) != i) 
        cnt++;          // pair (n/i)
}

👉 So even though:

You only loop till √n
You still count BOTH factors
⚠️ Important clarity

You asked:

"i square < n?"

Correct condition is:

i * i <= n

NOT:

i * i < n   ❌

👉 Because:

If i*i == n (perfect square)
You’ll miss that factor
🚀 Final understanding (lock this)

We stop at √n because beyond that, factors repeat

🔥 This pattern appears everywhere
Prime check
Divisor problems
Number theory

👉 This is not just one trick — it’s a pattern

If you want next:
I can show you how to convert your code into a perfect prime checker using this logic (interview-ready).

Good doubt — this is exactly where clarity matters.

❓ Can you write sqrt(n) instead of i * i <= n?

👉 Yes, you CAN write:

for(int i = 1; i <= sqrt(n); i++)

But…

⚠️ Why we usually DON’T prefer it
1. Performance (subtle but real)
sqrt(n) is a function call
It may run every iteration

👉 So:

i <= sqrt(n)   // recalculated again and again ❌
2. Precision issues (important)
sqrt(n) returns a double (floating point)
Comparisons with integers can be tricky

Example:

sqrt(36) = 6 ✅
But sometimes floating values ≈ 5.999999 😬

👉 Can cause bugs in edge cases

✅ Best practice (industry + CP)
for(int i = 1; i * i <= n; i++)

👉 Why this is better:

No floating point
No function call
Faster + safer
Cleaner logic
⚡ If you STILL want sqrt (safe way)

Do this:

int limit = sqrt(n);
for(int i = 1; i <= limit; i++)

👉 Now:

sqrt calculated once ✅
No repeated computation
🧠 Final rule (remember this)
Method	Use?
i * i <= n	✅ Best (always preferred)
i <= sqrt(n)	⚠️ Okay but not ideal
Precompute sqrt	✅ Acceptable
🔥 Your takeaway

Avoid floating math when integer math can do the job
*/
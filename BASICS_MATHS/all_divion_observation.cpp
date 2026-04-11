/*
1 36 2 18 3 12 4 9 6 => then sort using vector or list

1  X 36        ->N/1  smallXbig no.
2  X 18        ->N/2  smallXbig no.
3  X 12        ->N/3  smallXbig no.
4  X 9         ->N/4  smallXbig no.

___________above portion contsons all the factorial which means we dont have to go beyond this line

6  X 6      -> ROOT N

___________replication of upper half

9  X 4
12 X 3
18 X 2
36 X 1


for(i=1; i< = sqrt(n); i++){
if(n%i == 0){
print (i)

if((n/i)! = 1) // for 6 X 6 theres no two diffrent factors just make sure that n/i doesnt equal to the second factor whoich might turn out to be the same factor its very important the n by i which is the second factor must be compared with i and if they are not the same you can say that maybe print thats your another factor thats it

print(n/i);
}
}
*/
//
//#include<bits/stdc++.h>
//using namespace std;
//
//void division(int n){
//
//
//
//    for(int i; i <=sqrt(n) ; i++){
//        if (n %i==0)// single = lagay tha mistake
//        {
//            cout<< i << " ";
//        }
//        
//    }
//}
//
//int main(){
//    int n;
//    cin >> n;
//    division(n);
//}

// Floating point exception (core dumped) =is actually a runtime crash, not a normal compile error.
/*
Despite the name, “Floating point exception” ≠ only float issues.

In C++, it usually happens when:

❌ Division by zero (/ or %)
❌ Invalid math operation
*/

/*
🔴 First: What actually caused your crash?

Your error:

Floating point exception (core dumped)

👉 This almost always means:

❌ You did division or modulo by zero

🧠 Look at your condition carefully

From your code:

if(n % i == 0)

So crash can only happen if:

i == 0  ❌
🔍 Now check your loop
for(int i = 1; i <= sqrt(n); i++)

You think:

"i starts from 1, so it can never be 0"

✔️ Correct… BUT here's the catch:

⚠️ REAL PROBLEM
👉 When n = 0

Then:

sqrt(0) = 0

Loop becomes:

for(int i = 1; i <= 0; i++)

Loop won’t run, so that's fine.

BUT WAIT—

If somewhere else (or earlier version) you had:

for(int i = 0; i <= sqrt(n); i++)

Then:

n % 0  ❌ → crash → Floating point exception
🔥 So why did I change sqrt(n)?

Not because it's the main crash reason—but because:

❌ This is risky:
for(int i = 1; i <= sqrt(n); i++)
sqrt(n) → double
Compared with int i
Recomputed every iteration
Can cause subtle bugs
✅ What I did
int limit = sqrt(n);

Now:

✔️ computed once
✔️ stored as integer
✔️ no float comparison in loop

Then:

for(int i = 1; i <= limit; i++)
🧠 Final Truth (IMPORTANT)

👉 Your crash is NOT because of sqrt directly

It’s because:

somewhere i became 0 → n % 0

🚨 Add this safety check
if(n == 0){
    cout << "Invalid input";
    return;
}
⚡ What you should take from this

When you see:

Floating point exception

Immediately think:

division by zero
modulo by zero
💬 Simple analogy

Think:

n % i is like dividing something into groups
If i = 0 → "divide into zero groups" → impossible → crash 💥
*/

//#include<bits/stdc++.h>
//using namespace std;
//
//void division(int n){
//
//    int limit = sqrt(n);
//
//    for(int i; i <=limit ; i++){
//        if (n %i==0)// single = lagay tha mistake
//        {
//            cout<< i << " ";
//        }
//        
//    }
//}
//
//int main(){
//    int n;
//    cin >> n;
//    division(n);
//}



//36
//1 2 3 4 6 
//
//#include<bits/stdc++.h>
//using namespace std;
//
//void division(int n){
//
//    int limit = sqrt(n);
//
//    for(int i; i <=limit ; i++){
//        if (n %i==0)// single = lagay tha mistake
//        {
//            cout<< i << " ";
//        }
//
//        if (n/i != 1)
//        {
//            cout<< (n/i) << " "; // theres no problem  just ypu dont write this " " so sarri value chipki aa rhi hai tabhi galat lag rha hai
//        }
//        
//        
//    }
//}
//
//int main(){
//    int n;
//    cin >> n;
//    division(n);
//}
//

//WITH SORTING

#include<bits/stdc++.h>
using namespace std;

void division(int n){

    int limit = sqrt(n);
    vector<int> ls;

    for(int i; i <=limit ; i++){
        if (n %i==0)// single = lagay tha mistake
        {
            ls.push_back(i);
            if (n/i != 1){
            ls.push_back(n/i);
        }
      } 
    }
    sort(ls.begin(), ls.end());
    for (auto it : ls) cout << it << " ";
    
}

int main(){
    int n;
    cin >> n;
    division(n);
}

/*class Solution {
public:
    bool isHappy(int n) {
        int count =0;
        while(n>0){
        int rem=n%10;
        count = count*count + rem*rem;
        n=n/10;
        };
        if(count ==1){
            cout<< 1;
        }
        else{
            cout<<0;
        };
    };
};
A real-life analogy:

cout = saying the answer out loud 📢
return = writing the answer on a paper and handing it to the examiner 📄

LeetCode is the examiner. It doesn't care what you shout with cout; it wants the paper (return). 😄

Line 16: Char 5: error: non-void function does not return a value [-Werror,-Wreturn-type]=>bool means the function must return either true or false.

Your function is declared to return a value (bool), but it reaches the end without returning anything.

cout only prints output; it does not return true or false to the function caller.
*/

/*
class Solution {
public:
    bool isHappy(int n) {
        int count =0;
        while(n>0){
        int rem=n%10;
        count = count*count + rem*rem;// here mistake =>


        count = 0

digit = 9
count = 0*0 + 9*9 = 81

digit = 1
count = 81*81 + 1*1 = 6562


        n=n/10;
        };
        if(count ==1){
            return 1;
        }
        else{
            return 0;
        };
        bool isHappy() => kisi kaam ka nhi 
    };
};

*/

// LOGIC

/* QUEST
1. Create a function that converts a number into the sum of squares of its digits.
2. Keep repeating that process.
3. If you reach 1, return true.
4. If you start seeing the same number again, you're in a cycle, so return false.


19
↓
82
↓
68
↓
100
↓
1  → true


2
↓
4
↓
16
↓
37
↓
58
↓
89
↓
145
↓
42
↓
20
↓
4  ← repeated
*/ 

/*  LOGIC

while(true)
{
    convert n into sum of square of digits

    if n == 1
        return true

    if n already appeared before
        return false
}  OR=>


Create a set

While n != 1:
    If n is already in set:
        return false

    Add n to set
    n = sum of squares of digits

return true

so first make a set   get the no. get sum of square add it to set do till this then it get to one or no . repeated to the set value

*/

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        while (n !=1){
          if (seen.count(n))
          {
            return false;
          }
          
          seen.insert(n);

          int sum =0;
          while (n>0)
          {
           int digit =n%10;
           sum = sum + digit*digit;
           n=n/10;
          }
          sum = n;
        }
        return true;
        
    };
};


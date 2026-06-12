/*
Reverse String

Hint
Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.

Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Example 2:

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"

*/

// Line 7 says that you cant use extra memo means you cant make extra memo or or loops bigo(n) = TC

// APPROCHES =>

/*
*/

#include <bits/stdc++.h>
#include <vector>

class solution{
    public:

         void solve(vector<char>&s,int i,int j){
            if (i>=j)
            {
                return;
            }
            swap(s[i],s[j]);
            solve(s,i+1,j+i);
         }   


         void reverseString(vector<char>&s)
          solve(s,0,s.size()-1)
}
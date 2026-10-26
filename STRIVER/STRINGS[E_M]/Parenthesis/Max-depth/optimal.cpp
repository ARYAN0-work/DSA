class Solution {
public:
    int maxDepth(string s) {

        int count =0;
        int ans =0;

        for(int i=0;i<s.size();i++){

            if(s[i]=='('){
                count ++;
            }
            else if(s[i]==')'){
                count --;
            }
            ans = max(ans,count);
        }
        return ans;
    }
};

/*
How many approaches?

For this problem, don't force the "brute → better → optimal" framework.

There are basically 2 common approaches:

1. Brute — Stack

Use a stack:

( → push
) → pop

The maximum size of the stack is the maximum nesting depth.

Complexity:

Time:  O(n)
Space: O(n)
2. Optimal — Counter

Exactly what you're doing:

count++;
count--;
ans = max(ans, count);

Complexity:

Time:  O(n)
Space: O(1)

So for your DSA sheet, I'd classify this as:

Brute: Stack → Optimal: Counter

There isn't really a meaningful "better" solution between them.

And importantly, your approach was already the optimal approach. Your only mistake was checking ans when count == 0 instead of checking it after every character.
*/
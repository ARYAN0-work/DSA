/**
atoi is also not a problem where you need to invent some crazy algorithm. The core is still a linear scan of a string.

But I would definitely do this one because it teaches several interview-relevant edge cases:

leading whitespace
+ / -
stopping at the first non-digit
leading zeros
integer overflow
manually building a number

The most reusable part is: */

class Solution {
public:
    int myAtoi(string s) {

        int i = 0;
        int sign = 1;
        int ans = 0;

        while(i < s.size() && s[i] == ' ') {
            i++;
        }

        if(i < s.size() && (s[i] == '+' || s[i] == '-')) {
            if(s[i] == '-') {
                sign = -1;
            }
            i++;
        }

        while(i < s.size() && s[i] >= '0' && s[i] <= '9') {

            int digit = s[i] - '0';

            if(ans > (INT_MAX - digit) / 10) {
                if(sign == 1)
                    return INT_MAX;
                else
                    return INT_MIN;
            }

            ans = ans * 10 + digit;
            i++;
        }

        return ans * sign;
    }
};
class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size() != t.size()) {
            return false;
        }

        vector<bool> used(t.size(), false);

        for (int i = 0; i < s.size(); i++) {

            bool found = false;

            for (int j = 0; j < t.size(); j++) {

                if (s[i] == t[j] && !used[j]) {
                    used[j] = true;
                    
                    found = true;
                    break;
                }
            }

            if (!found) {
                return false;
            }
        }

        return true;
    }
};

/*
1. What's wrong with our brute-force approach?

Our current logic is:

Pick a character from s.
Search for that character in t.
If found, move to the next character in s.

The problem is that we never remember which characters we've already matched.

For example:

s = "aab"
t = "abb"

Our code can match both occurrences of 'a' in s to the same 'a' in t.

That's a logical error, not a flaw in brute force.
*/
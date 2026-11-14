class Solution {
public:
    bool isPalindrome(string s) {
        string a, rev;

        for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])) {
                a.push_back(tolower(s[i]));
            }
        }

        for (int i = a.size() - 1; i >= 0; i--) {
            rev.push_back(a[i]);
        }

        if (a == rev) {
            return true;
        }

        return false;
    }
};
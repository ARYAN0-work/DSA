class Solution {
public:
    int maxDepth(string s) {
        vector<char> v;
        int ans = 0;

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') {
                v.push_back(s[i]);
                ans = max(ans, (int)v.size());
            }
            else if(s[i] == ')') {
                v.pop_back();
            }
        }

        return ans;
    }
};
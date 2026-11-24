class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size()!=t.size()){
            return false;
        }

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int k = s.size()-1;

        while(k>=0){
            if(s[k]==t[k]){
                k--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};

/* REASON K<=0=>

CASE:

s='ab'
t='bc'

*/
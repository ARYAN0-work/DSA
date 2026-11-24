class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size()!=t.size()){
            return false;
        }

        int freq[26]={0};

        for(int i=0;i<s.size();i++){
            int count = s[i]-'a';
            freq[count]++;
        }

        for(int j=0;j<s.size();j++){
            int count = t[i]-'a';
            freq[count]--;
        }

        for(int k=0;k<26;k++){
            if(freq[k]!=0){
                return false;
            }
        }
        return true;
    }
};
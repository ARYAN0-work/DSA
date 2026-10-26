class Solution {
public:

    vector<string>ans;

    void genrate(string s,int open,int close,int n){
        if(s.size()==2*n){
            ans.push_back(s);
            return;
        }

        if(open<n){
            genrate(s+'(',open+1,close,n);
        }

        if(close<open){
            genrate(s+')',open,close+1,n);
        }

    }



    vector<string> generateParenthesis(int n) {
        ans.clear();
        genrate("",0,0,n);
        return ans;
    }
};
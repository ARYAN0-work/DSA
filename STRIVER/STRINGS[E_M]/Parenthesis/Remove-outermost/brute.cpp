class Solution {
public:
    string removeOuterParentheses(string s) {
        
        string ans="";
        string temp="";
        int count =0;

        for(int i=0;i<string.size();i++){
            
            temp += s[i];

            if(string[i]=='('){
                count ++;
            } else{
                count --;
            }
            if(count ==0){
                for(int j=1;j<temp.size()-1;j++){
                    ans= ans + temp[j];
                }
                temp ="";
            }
        }
        return ans;
    }
};

/*
INPUT
  ↓
Outer loop touches every character
  ↓
O(n)

temp collects characters
  ↓
Each character eventually gets processed again
  ↓
O(n)

Total
  ↓
O(n) + O(n)
  ↓
O(n)
*/
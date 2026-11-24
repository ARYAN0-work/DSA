class Solution {
public:

    string encode(vector<string>& strs) {
        string ans= "";

        for(int i=0;i<strs.size();i++){
            ans = ans + to_string(strs[i].size())+"#"+strs[i];
        }
        return ans;
    }
/*
N = Total number of characters across all input strings.
K = Number of strings.
Time Complexity: O(N + K)


Space Complexity: O(N + K)

The encoded string stores all the original characters, plus a length prefix and delimiter for every string.

The output requires O(N + K) space.
*/

    vector<string> decode(string s) {
        vector<string>ans;
        int i=0;
        int length=0;

        while(i<s.size()){
            int length =0;

            while(s[i]!= '#'){
                length =length *10 + (s[i]-'0');
                i++;
            }
            i++;

            string word = s.substr(i,length);
            ans.push_back(word);
            i=i+length;
        }
        return ans;
    }
};

/*
Time Complexity: O(M)

We traverse the encoded string using the pointer i.

Each character is processed a constant number of times:

Read the length prefix.
Skip the delimiter.
Extract the original string.

Therefore, decoding takes O(M) time.

Space Complexity: O(N + K)

The decoded vector stores all the original strings, requiring O(N + K) space when accounting for the strings and vector elements.

The auxiliary space used by the decoding logic is O(1), excluding the output
*/

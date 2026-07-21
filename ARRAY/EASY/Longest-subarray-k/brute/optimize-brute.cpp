#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int>&brute, int k){

    int maxLength = 0;
      for(int i =0; i<brute.size(); i++){

        int sum = 0;

            for(int j=i; j<; j++)
            {
                sum += brute[j];
            }
            if(sum==k){
                maxLength = max(maxLength,j-i+1);
            }
           }
        }
        return maxLength;
      

int main()
{
    vector<int> arr = {2, 3, 5, 1, 9};
    int k = 10;

    cout << longestSubarray(arr, k);

    return 0;
}
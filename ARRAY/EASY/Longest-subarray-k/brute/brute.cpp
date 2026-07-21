#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int>&brute, int k){

    int maxLength = 0;
      for(int i =0; i<brute.size(); i++){

      //  int maxlength =0; => every time i changes maxlength becomes 0

      int summ =0;
        for(int j=0; j<i;j++){
           int size=0;
//           while(j<k){   //j<k
//            size=size+brute[j];
        for(int x=i ; x<=j; x++){
            sum+=brute[x];
        }
            //if(size==length) length=max(length,j-i);
            if(sum==k){
                maxLength = max(maxLength,j-i+1);
            }
           }
        }
        return maxLength;
      }

int main()
{
    vector<int> arr = {2, 3, 5, 1, 9};
    int k = 10;

    cout << longestSubarray(arr, k);

    return 0;
}
class Solution {

public:
    int lowerbound(vector<int>&mat,int n,int x){
        int low=0,high = n-1;
        int ans=n;

        while(low<=high){
            int mid = (low+high)/2;

            if(mat[mid]>=x){
                ans = mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    
    
  public:   
  int rowWithMax1s(vector < vector < int >> & mat,int n,int m) {

      int cnt_max=0;
      int index =-1;

      for(int i=0;i<n;i++){
          int cnt_one= m-lowerbound(mat[i],m,1);
          if(cnt_one> cnt_max){
              cnt_max = cnt_one;
              index=i;
          }
      }
      return index;
  }
};
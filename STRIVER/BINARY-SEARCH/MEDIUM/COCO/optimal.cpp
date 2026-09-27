class Solution {

public:
   int findd(vector<int>&piles,int h){
         int rem = ceil((double)piles[i]/h);
         return rem;
   }  


public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int low=0;int high= *max_element(piles);
        while(low<=high){
            mid= (low+high)/2;

            int totalH = findd(piles,mid);

            if(totalH<=h){
                high = mid-1;
            }
            else{
                low = mid +1;
            }
        }
        return low;
    }
};
class Solution {

public:
    int sum =0;
    int findpiles(vector<int>&piles,int h,int i){
        for(int j=0;j<piles.size();j++){
            sum = sum + ceil((double)piles[j] / i);
        }
        return sum;

    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int maxi = *max_element(piles.begin(),piles.end());

        for(int i=0;i<=maxi;i++){
            int ans = findpiles(piles,h,i);
            if(ans<=h){
                return i;
            }
        }
        return -1;
    }
};
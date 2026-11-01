class Solution {
public:
    long long pilesperhour(vector<int>& piles, int k) {

        long long sum = 0;

        for(int i = 0; i < piles.size(); i++) {

            int rem = ceil((double)piles[i] / k);
            sum += rem;
        }

        return sum;
    }

    int minEatingSpeed(vector<int>& piles, int h) {

        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        int ans = high;

        while(low <= high) {

            int mid = low + (high - low) / 2;

            long long hours = pilesperhour(piles, mid);

            if(hours <= h) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return ans;
    }
};
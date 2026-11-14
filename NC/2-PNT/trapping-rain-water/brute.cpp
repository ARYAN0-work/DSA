class Solution {
public:
    int trap(vector<int>& height) {

        int n = height.size();
        int total=0;

        for(int i=0;i<n;i++){
            int leftMax=0;
            int rightMax=0;

            for(int j=0;j<=i;j++){
                leftMax= max(leftMax,height[j]);
            }

            for(int j=i;j<n;j++){
                rightMax= max(rightMax,height[j]);
            }

            total = total + min(leftMax,rightMax)- height[i];
        }
        return total;
    }
};
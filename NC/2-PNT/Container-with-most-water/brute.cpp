class Solution {
public:
    int maxArea(vector<int>& height) {

        int n=height.size();
        int maxi=0;
        int area=0;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                
                int ht = min(height[i],height[j]);
                int width = j-i;
                area = ht*width;
                maxi= max(area,maxi);
            }
        }
       return maxi;
    }
};
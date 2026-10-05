class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        vector<int> ans;
        int j=0,k=0;

        int n = nums1.size()+nums2.size();

        while(j<nums1.size() && k<nums2.size()){

            if(nums1[j] < nums2[k]){
                ans.push_back(nums1[j]);
                j++;
            }
            else{
                ans.push_back(nums2[k]);
                k++;
            }
        }

        while(j<nums1.size()){
            ans.push_back(nums1[j]);
            j++;
        }

        while(k<nums2.size()){
            ans.push_back(nums2[k]);
            k++;
        }

        if(n%2==0){
            return (ans[n/2-1] + ans[n/2]) / 2.0;
        }
        else{
            return ans[n/2];
        }
    }
};
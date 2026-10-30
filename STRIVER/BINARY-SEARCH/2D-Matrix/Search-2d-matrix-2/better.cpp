class Solution {

public:
    bool bs(vector<int>& matrix, int target){
        int low = 0;
        int high = matrix.size() - 1;

        while(low <= high){
            int mid = (low + high) / 2;

            if(matrix[mid] == target){
                return true;
            }

            if(matrix[mid] > target){
                high = mid - 1;
            }

            if(matrix[mid] < target){
                low = mid + 1;
            }
        }

        return false;
    }

public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        for(int i = 0; i < matrix.size(); i++){
            if(bs(matrix[i], target)){
                return true;
            }
        }

        return false;
    }
};
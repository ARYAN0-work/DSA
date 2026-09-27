class Solution {
public:

    int firstOccurance(vector<int>& arr, int n, int k) {
        int low = 0, high = n - 1;
        int first = -1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (arr[mid] == k) {
                first = mid;
                high = mid - 1;
            }
            else if (arr[mid] < k) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return first;
    }

    int lastOccurance(vector<int>& arr, int n, int k) {
        int low = 0, high = n - 1;
        int last = -1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (arr[mid] == k) {
                last = mid;
                low = mid + 1;
            }
            else if (arr[mid] < k) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return last;
    }

    vector<int> searchRange(vector<int>& arr, int k) {

        int n = arr.size();

        int first = firstOccurance(arr, n, k);

        if (first == -1)
            return {-1, -1};
                                                                                                                                                                                                                                                 
        int last = lastOccurance(arr, n, k);

        return {first, last};
    }

    int count(vector<int>& arr, int x) {
    pair<int, int> ans = searchRange(arr, x);

    if (ans.first == -1)
        return 0;

    return ans.second - ans.first + 1;
}
 
    
};
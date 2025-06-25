class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i = 0, num = 1, missing = 0;

        while (missing < k) {
            if (i < arr.size() && arr[i] == num) {
                i++;
            } else {
                missing++;
                if (missing == k) return num;
            }
            num++;
        }

        return -1; 
    
    }
};

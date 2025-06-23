class Solution {
public:
    void rotateRight(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // Normalize k

        reverse(nums.begin(), nums.end());// Reverse the entire array
        reverse(nums.begin(), nums.begin() + k);// Reverse the first k elements of reversed array
        reverse(nums.begin() + k, nums.end());// Reverse the remaining n-k elements of reversed array
    }
};

void rotateLeft(std::vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;  // normalize k

        // Step 1: Reverse first k elements
        std::reverse(nums.begin(), nums.begin() + k);

        // Step 2: Reverse remaining n-k elements
        std::reverse(nums.begin() + k, nums.end());

        // Step 3: Reverse the entire array
        std::reverse(nums.begin(), nums.end());
    }
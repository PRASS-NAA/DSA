class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int cnt = 0;
        int sum = 0;
        vector<int> prefix(nums.size(), 0); // Initialize prefix to size of nums

        // Calculate total sum of nums
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }

        // Calculate prefix sum
        prefix[0] = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            prefix[i] = prefix[i-1] + nums[i];
        }

        // Calculate the number of valid splits
        for(int i = 0; i < nums.size() - 1; i++) { // Split cannot happen at the last element
            if(prefix[i] >= (sum - prefix[i])) {
                cnt++;
            }
        }

        return cnt;
    }
};

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>ans;

        ans.push_back(nums[0]);

        for(int i =1;i<nums.size();i++)
        {
            int sum = 0;
            for(int j=0;j<=i;j++)
            {
                sum+=nums[j];
            }
            ans.push_back(sum);
        }

        return ans;
    }
};
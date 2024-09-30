class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans;

        int i=0;
        int j =0;

        while(i < nums.size() && j < nums.size())
        {
            if(i < nums.size())
            {
                while(nums[i]<0)
                {
                    i++;
                }
                ans.push_back(nums[i]);
                i++;
            }

            if( j < nums.size())
            {
                while(nums[j] > 0)
                {
                    j++;
                }
                ans.push_back(nums[j]);
                j++;
            }
        }

        return ans;
    }
};
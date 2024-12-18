class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> mpp;
        int ans = -1;

        for(int i =0;i<nums.size();i++)
        {
            if(nums[i] %2 == 0)
            {
                mpp[nums[i]]++;
            }
        }
        int max = INT_MIN;

        for(auto it:mpp)
        {
           if(it.second > max)
           {
             ans = it.first;
             max = it.second;
           }
        }

        return ans;
    }
};
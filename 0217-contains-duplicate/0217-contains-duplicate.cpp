class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool dup = false;
    map<int,int>mpp;
    for(int i=0;i<nums.size();i++)
    {
        mpp[nums[i]]++;
    }

    for(auto it : mpp)
    {
        if(it.second > 1)
        {
            dup = true;
        }
    }

    if(dup == false)
    {
        return false;
    }
    return true;
    }
};
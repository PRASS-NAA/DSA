class Solution {
public:
    int arraySign(vector<int>& nums) {
        long long int prod = 1;

        for(int i =0;i<nums.size();i++)
        {
            prod*=nums[i];
        }

        if(prod > 0)
        {
            return 1;
        }else if(prod < 0)
        {
            return -1;
        }else{
            return 0;
        }
        return -1;
    }
};
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sumofarr = 0;
        for(int i =0;i<nums.size();i++)
        {
            sumofarr += nums[i];
        }
        int sumofn = 0;
        int size = nums.size();
        sumofn = (size * (size+1))/2;

        return (sumofn - sumofarr);
    }
};
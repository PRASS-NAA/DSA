class Solution {
public:

    int firstOcc(vector<int>& nums, int target)
    {
        int left = 0;
        int right = nums.size()-1;
        int ans = -1;

        while(left <= right)
        {
            int mid = (left+right)/2;

            if(nums[mid] == target)
            {
                ans = mid;
                right = mid-1;
            }

            else if(nums[mid] < target)
            {
                left = mid+1;
            }
            else{
                right = mid-1; 
            }
        }

        return ans;
    }

    int lastOcc(vector<int>& nums, int target)
    {
        int left = 0;
        int right = nums.size()-1;
        int ans = -1;

        while(left <= right)
        {
            int mid = (left+right)/2;

            if(nums[mid] == target)
            {
                ans = mid;
                left = mid+1;
            }

            else if(nums[mid] < target)
            {
                left = mid+1;
            }
            else{
                right = mid-1; 
            }
        }

        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int first = firstOcc(nums, target);
        int last = lastOcc(nums,target);

        ans.push_back(first);
        ans.push_back(last);

        return ans;
    }
};
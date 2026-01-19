class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer,Integer> mp1 = new HashMap<>();
        int[] ans = new int[2];

        for(int i =0;i<nums.length;i++)
        {
            int diff = target - nums[i];

            if(mp1.containsKey(diff))
            {
                ans[0] = i;
                ans[1] = mp1.get(diff);
            }

            mp1.put(nums[i], i);
        }

        return ans;
    }
}
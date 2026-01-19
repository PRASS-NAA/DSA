class Solution {
    public List<Integer> findDuplicates(int[] nums) {
        ArrayList<Integer> ansarr = new ArrayList<>();

        HashMap<Integer,Integer> mpp = new HashMap<>();

        for(int i =0;i<nums.length;i++)
        {
            if(mpp.containsKey(nums[i]))
            {
                int temp = mpp.get(nums[i]);
                mpp.put(nums[i], temp+1);
            }else{
                mpp.put(nums[i], 1);
            }
        }

        for(Integer i : mpp.keySet())
        {
            if(mpp.get(i) == 2)
            {
                ansarr.add(i);
            }
        }

        return ansarr; 
    }
}
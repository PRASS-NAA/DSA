class Solution {
    public int findDuplicate(int[] nums) {
        HashMap<Integer,Integer> mpp=new HashMap<>();
        for(int i=0;i<nums.length;i++){
            int freq=mpp.getOrDefault(nums[i],0);
            mpp.put(nums[i],freq+1);
        }
        int element=-1;
        for(Map.Entry<Integer,Integer> entry:mpp.entrySet()){
            if(entry.getValue()>1){
                element=entry.getKey();
            }
        }
        return element;
    }
}
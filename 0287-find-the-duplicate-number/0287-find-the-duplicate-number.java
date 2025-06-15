class Solution {
    public int findDuplicate(int[] nums) {
        Map<Integer,Integer> mp = new HashMap<>();
        for(int i = 0; i < nums.length; i++){
            mp.put(nums[i],mp.getOrDefault(nums[i],0) + 1);
        }
        for(Map.Entry<Integer,Integer> entry : mp.entrySet()){
            if(entry.getValue() > 1)
                return entry.getKey();
        }
        return 0;
    }
}
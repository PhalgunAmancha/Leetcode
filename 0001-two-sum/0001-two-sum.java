class Solution {
    public int[] twoSum(int[] nums, int target) {
        int res[] = new int[2];
        Map<Integer,Integer> mp = new HashMap<>();
        res[0] = res[1] = -1;
        for(int i = 0; i < nums.length; i++){
            int sum = nums[i];
            int rem = target - sum;
            if(mp.containsKey(rem)){
                res[0] = mp.get(rem);
                res[1] = i;
                return res;
            }
            mp.put(nums[i],i);
        }
        return res;
    }
}
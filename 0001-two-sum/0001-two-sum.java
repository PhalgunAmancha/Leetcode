class Solution {
    public int[] twoSum(int[] nums, int target) {
        int [] res = new int[2];
        res[0] = res[1] = -1;
        Map<Integer,Integer> map = new HashMap<>();
        for(int i = 0; i < nums.length; i++)
        {
            int sum = nums[i];
            int rem = target - sum;
            if(map.containsKey(rem))
            {
                res[0] = map.get(rem);
                res[1] = i;
                return res;
            }
            map.put(nums[i] , i);
        }
    return res;
    }
}
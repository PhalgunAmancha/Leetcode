class Solution {
    public int maximumDifference(int[] nums) {
        int diff = -1;
        int maxi = -1;
        for(int i = 0; i < nums.length; i++){
            for(int j = i + 1; j < nums.length; j++){
                if(nums[i] < nums[j]){
                    diff = nums[j] - nums[i];
                }
                maxi = Math.max(maxi, diff);
            }
        }
        return maxi;
    }
}
class Solution {
    public int maxProduct(int[] nums) {
        int maxEnding = nums[0];
        int minEnding = nums[0];
        int res = nums[0];

        for (int i = 1; i < nums.length; i++) {
            int tempMax = maxEnding;
            maxEnding = Math.max(Math.max(maxEnding * nums[i], minEnding * nums[i]), nums[i]);
            minEnding = Math.min(Math.min(tempMax * nums[i], minEnding * nums[i]), nums[i]);
            res = Math.max(res, maxEnding);
        }

        return res;
    }
}

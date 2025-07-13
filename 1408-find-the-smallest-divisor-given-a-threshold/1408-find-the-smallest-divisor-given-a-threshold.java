class Solution {
    public int divisorSum(int[] nums, int divisor){
        int sum = 0;
        for (int num : nums) {
            sum += (num + divisor - 1) / divisor; // efficient integer ceil
        }
        return sum;
    }

    public int smallestDivisor(int[] nums, int threshold) {
        int low = 1;
        int high = 0;
        for (int num : nums) {
            high = Math.max(high, num);
        }

        int ans = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (divisorSum(nums, mid) <= threshold) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
}

class Solution {
    public int[] concatWithReverse(int[] nums) {
        int[] res = new int[2 * nums.length];

        int i;
        for (i = 0; i < nums.length; i++) {
            res[i] = nums[i];
        }

        i = nums.length - 1;
        int j = nums.length;

        while (j < res.length) {
            res[j] = nums[i];
            i--;
            j++;
        }

        return res;
    }
}
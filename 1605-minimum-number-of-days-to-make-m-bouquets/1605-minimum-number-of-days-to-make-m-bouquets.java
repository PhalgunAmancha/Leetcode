class Solution {
    // Helper to check if we can make 'm' bouquets by day 'day'
    public boolean isPossible(int[] bloomDay, int day, int m, int k){
        int count = 0;
        int bouquets = 0;
        for (int bloom : bloomDay) {
            if (bloom <= day) {
                count++;
                if (count == k) {
                    bouquets++;
                    count = 0;
                }
            } else {
                count = 0; // reset the streak
            }
        }
        return bouquets >= m;
    }

    public int minDays(int[] bloomDay, int m, int k) {
        int n = bloomDay.length;
        if (n < m * k) return -1; // Not enough flowers

        int low = Integer.MAX_VALUE;
        int high = Integer.MIN_VALUE;
        for (int day : bloomDay) {
            low = Math.min(low, day);
            high = Math.max(high, day);
        }

        int ans = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (isPossible(bloomDay, mid, m, k)) {
                ans = mid;
                high = mid - 1; // try to find a smaller possible day
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
}

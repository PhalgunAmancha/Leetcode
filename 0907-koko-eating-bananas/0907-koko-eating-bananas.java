class Solution {
    public int maxElement(int[] piles, int n){
        int maxi = Integer.MIN_VALUE;
        for(int i = 0; i < n; i++){
            if(piles[i] > maxi){
                maxi = piles[i];
            }
        }
        return maxi;
    }

    public long calculateTotalHrs(int[] piles, int mid){
        long totalHrs = 0;
        for(int i = 0; i < piles.length; i++){
            totalHrs += (piles[i] + mid - 1) / mid; // integer ceiling
        }
        return totalHrs;
    }

    public int minEatingSpeed(int[] piles, int h) {
        int n = piles.length;
        int low = 1;
        int high = maxElement(piles, n);
        int ans = Integer.MAX_VALUE;

        while(low <= high){
            int mid = low + (high - low) / 2; // avoid overflow
            long totalHrs = calculateTotalHrs(piles, mid);
            if(totalHrs <= h){
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
}

import java.lang.Math;

class Solution {
    int maxfun(int piles[]) {
        int n = piles.length; // Fix: Use piles.length
        int largest = piles[0];
        for (int i = 1; i < n; i++) {
            if (piles[i] > largest) {
                largest = piles[i];
            }
        }
        return largest;
    }

    int totalHrs(int piles[], int hourly) {
        int totalhrs = 0;
        int n = piles.length; // Fix: Use piles.length
        for (int i = 0; i < n; i++) {
            totalhrs += Math.ceil((double)piles[i] / hourly); // Fix: Use Math.ceil and cast to double
        }
        return totalhrs;
    }

    public int minEatingSpeed(int[] piles, int h) {
        int low = 1;
        int high = maxfun(piles);
        int ans = high; // Initialize ans with a default value
        while (low <= high) {
            int mid = (low + high) / 2;
            int totalhrs = totalHrs(piles, mid);
            if (totalhrs <= h) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
}

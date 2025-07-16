class Solution {
    public int calculateDaysRequired(int[] weights, int cap){
        int day = 1;
        int load = 0;
        for(int i = 0; i < weights.length; i++){
            if(load + weights[i] > cap){
                day++;
                load = weights[i];
            }
            else{
                load += weights[i];
            }
        }
        return day;
    }
    public int shipWithinDays(int[] weights, int days) {
        int low = Integer.MIN_VALUE;
        int high = 0;
        for(int weight : weights){
            low = Math.max(low, weight);
            high += weight;
        }
        int ans = 0;
        while(low <= high){
            int mid = (low + high) / 2;
            int totalNoOfDays = calculateDaysRequired(weights, mid);
            if(totalNoOfDays <= days){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
}
class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int left = m - 1;
        int right = 0;
        while(left >= 0 && right < n){
            if(nums1[left] > nums2[right]){
                int temp = nums1[left];
                nums1[left] = nums2[right];
                nums2[right] = temp;
                left--;
                right++;
            }
            else break;
        }
        Arrays.sort(nums1, 0, m);
        Arrays.sort(nums2);
        for(int i = 0; i < n; i++){
            nums1[m + i] = nums2[i];
        }
    }
}
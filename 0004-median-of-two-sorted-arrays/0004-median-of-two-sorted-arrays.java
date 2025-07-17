class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        List<Integer> list = new ArrayList<>();
        int i = 0;
        int j = 0;
        int n1 = nums1.length;
        int n2 = nums2.length;
        while(i < n1 && j < n2){
            if(nums1[i] < nums2[j]){
                list.add(nums1[i]);
                i++;
            }
            else{
                list.add(nums2[j]);
                j++;
            }
        }
        while(i < n1){
            list.add(nums1[i]);
            i++;
        }
        while(j < n2){
            list.add(nums2[j]);
            j++;
        }
        int n = n1 + n2;
        if(n % 2 == 1) return (float) list.get(n / 2);
        return (float) (list.get(n / 2) + list.get(n/2 - 1)) / 2;
    }
}
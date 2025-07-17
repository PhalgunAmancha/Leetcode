class Solution {
    public List<Integer> targetIndices(int[] nums, int target) {
        Arrays.sort(nums);
        int n = nums.length;
        List<Integer> ansList = new ArrayList<>();
        for(int i = 0; i < n; i++){
            if(nums[i] == target){
                ansList.add(i);
            }
        }
        return ansList;
    }
}
class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        Set<List<Integer>> st = new HashSet<>();
        for(int i = 0; i < nums.length; i++){
            Set<Integer> hashSet = new HashSet<>();
            for(int j = i + 1; j < nums.length; j++){
                int third = -(nums[i] + nums[j]);
                if(hashSet.contains(third)){
                    List<Integer> temp = new ArrayList<>();
                    temp.add(nums[i]);
                    temp.add(nums[j]);
                    temp.add(third);
                    Collections.sort(temp);
                    st.add(temp);
                }
                hashSet.add(nums[j]);
            }
        }
        List<List<Integer>> ans = new ArrayList<>();
        for(List<Integer> it : st){
            ans.add(it);
        }
        return ans;
    }
}
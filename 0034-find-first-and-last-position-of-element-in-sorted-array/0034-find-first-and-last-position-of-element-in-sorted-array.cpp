class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int i=0,j=n-1;
        vector<int>ans;
        while(i<=j)
        {
            if(nums[i]<target)
            {
                i++;
            }
            else if(nums[j]>target)
            {
                j--;
            }
            else{
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
        return {-1,-1};
    }
};
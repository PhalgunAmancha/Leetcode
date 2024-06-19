class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int sn=0;
        for(int i=0;i<nums.size();i++)
        {
            sn=sn^nums[i];
        }
        return sn;
    }
};
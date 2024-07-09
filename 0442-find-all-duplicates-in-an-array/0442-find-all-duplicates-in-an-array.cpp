class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        map<int,int>mpp;
        for(auto it:nums)
        {
            mpp[it]++;
        }
        for(auto it:mpp)
        {
            if(it.second>1)
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};
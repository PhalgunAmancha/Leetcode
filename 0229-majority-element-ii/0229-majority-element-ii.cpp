class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        map<int,int>mp;
        int i=0;
        for(i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(auto it:mp)
        {
            if(it.second>(nums.size()/3))
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};
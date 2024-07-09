class Solution {
public:
    // bool sortvaluesbyDesc(pair<int, int>& a, pair<int, int>& b) {
    // return a.second > b.second;
    // }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        map<int,int>mpp;
        for(auto it:nums)
        {
            mpp[it]++;
        }
         auto sortvaluesbyDesc = [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second;
        };
       vector<pair<int,int>>a(mpp.begin(),mpp.end());
       sort(a.begin(),a.end(),sortvaluesbyDesc);
       for(int i=0;i<k;i++)
       {
        ans.push_back(a[i].first);
       }
        return ans;

    }
};
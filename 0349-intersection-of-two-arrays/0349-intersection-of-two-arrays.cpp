class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> result_set;
        vector<int> ans;
        
        for (auto it : nums2) {
            if (set1.find(it) != set1.end()) {
                result_set.insert(it);  // Insert into result_set to avoid duplicates
            }
        }

        ans.assign(result_set.begin(), result_set.end());  // Convert set to vector
        return ans;
    }
};
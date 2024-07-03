class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>nums3;
        for(int i=0;i<nums1.size();i++)
        {
            nums3.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++)
        {
            nums3.push_back(nums2[i]);
        }
        int n=nums3.size();
        sort(nums3.begin(),nums3.end());
        if(n%2==0)
        {
            return ((nums3[n/2.0]+nums3[(n/2.0)-1])/2.0);
        }
        return (nums3[n/2.0]);
        
    }
};
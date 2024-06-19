class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long x=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            x=x^nums[i];
        }
        long k=(x&~(x-1));
        long res1=0,res2=0;
        for(int i=0;i<nums.size();i++)
        {
            if((nums[i]&k)!=0)
                res1=res1^nums[i];
            else
                res2=res2^nums[i];
        }
        vector<int>arr;
        arr.push_back(res1);
        arr.push_back(res2);
        return arr;
    }
};
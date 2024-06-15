class Solution {
public:
    int xorOperation(int n, int start) {
        int nums[n];
        for(int i=0;i<n;i++)
        {
            nums[i]=start+(2*i);
        }
        int res=nums[0];
         for(int i=1;i<n;i++)
        {
           res=res^nums[i];
        }
        return res;
    }
};
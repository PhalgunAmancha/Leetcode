class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod_c=1;
        int sum=0;
        while(n>0)
        {
            int temp=n%10;
            prod_c=prod_c*temp;
            sum=sum+temp;
            n=n/10;
        }
        return prod_c-sum;
    }
};
class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum=0;
        int cur=x;
        while(x>0)
        {
            int temp=x%10;
            sum=sum+temp;
            x=x/10;
        }
        if(cur%sum==0)
            return sum;
        return -1;
    }
};
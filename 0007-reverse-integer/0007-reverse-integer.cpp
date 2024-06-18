class Solution {
public:
    int reverse(int x) {
        int temp=x;
        long sum=0;
        // int sum1,sum2=0;
            while(temp)
            {
                int p=temp%10;
                sum=sum*10+p;
                temp=temp/10;
            }
            if(sum>INT_MAX || sum<INT_MIN) return 0;
            return int(sum);
        }
};
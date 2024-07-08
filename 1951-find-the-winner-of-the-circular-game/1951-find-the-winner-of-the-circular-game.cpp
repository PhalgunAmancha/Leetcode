class Solution {
public:
    int jos(int n,int k)
    {
        if(n==1)
        {
            return 0;
        }
        else
        {
            return ((jos((n-1),k))+k)%n;
        }
    }
    int myjos(int n,int k)
    {
        return jos(n,k)+1;
    }
    int findTheWinner(int n, int k) {
        int x=myjos(n,k);
        return x;
    }
};
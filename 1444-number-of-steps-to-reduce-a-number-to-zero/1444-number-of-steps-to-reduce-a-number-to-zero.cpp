class Solution {
public:
    int numberOfSteps(int num) {
        int c=0;
       while(num>0)
       {
        if(num%2==0)
        {
            c++;
            num=num/2;
        }
        else{
            c++;
            num=num-1;
        }
       }
       return c;
    }
    
};
class Solution {
public:
    int minimumPushes(string word) {
        int n=word.length();
        if(n<9)
            return n;
        else if(n>8 && n<17)
            return 8+(n-8)*2;
        else if(n>16 && n<25)
            return 8*1+8*2+(n-16)*3;
        else
            return 8*1+8*2+8*3+(n-24)*4;
    }
};
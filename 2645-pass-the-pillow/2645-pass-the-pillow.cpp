class Solution {
public:
    int passThePillow(int n, int time) {
        int pos = time % (2 * (n - 1)); 
        if (pos < n) {
            return pos + 1; 
        } else {
            return 2 * n - pos - 1; 
        }
    }
};
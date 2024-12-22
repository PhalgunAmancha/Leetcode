class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = -1; // Pointer to the first zero
        // Find the first zero
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                j = i;
                break;
            }
        }

        // If no zero is found, no need to process further
        if (j == -1) return;

        // Shift non-zero elements to the left
        for (int i = j + 1; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};

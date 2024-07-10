class Solution {
public:
    void reverse(vector<int>& nums, int x, int y) {
        while (x < y) {
            swap(nums[x], nums[y]);
            x++;
            y--;
        }
    }

    bool binarySearch(vector<int>& nums, int low, int high, int x) {
        while (low <= high) {
            int mid = low + (high - low) / 2;

           
            if (nums[mid] == x)
                return true;

            
            if (nums[mid] < x)
                low = mid + 1;
            
            else
                high = mid - 1;
        }
        
        return false;
    }

    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int j = -1;

        
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                j = i;
                break;
            }
        }

        
        if (j == -1) {
            return binarySearch(nums, 0, n - 1, target);
        }

        
        reverse(nums, 0, j);
        
        reverse(nums, j + 1, n - 1);
       
        reverse(nums, 0, n - 1);

        
        return binarySearch(nums, 0, n - 1, target);
    }
};

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

            // Check if x is present at mid
            if (nums[mid] == x)
                return true;

            // If x greater, ignore left half
            if (nums[mid] < x)
                low = mid + 1;
            // If x is smaller, ignore right half
            else
                high = mid - 1;
        }
        // If we reach here, then element was not present
        return false;
    }

    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int j = -1;

        // Find the pivot point where the rotation happens
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                j = i;
                break;
            }
        }

        // If the array is not rotated
        if (j == -1) {
            return binarySearch(nums, 0, n - 1, target);
        }

        // Reverse the first part
        reverse(nums, 0, j);
        // Reverse the second part
        reverse(nums, j + 1, n - 1);
        // Reverse the entire array
        reverse(nums, 0, n - 1);

        // Perform binary search on the sorted array
        return binarySearch(nums, 0, n - 1, target);
    }
};

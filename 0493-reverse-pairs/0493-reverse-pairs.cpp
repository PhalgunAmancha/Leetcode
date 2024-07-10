class Solution {
public:
    void merge(vector<int> &nums, int low, int mid, int high) {
        vector<int> temp; // temporary array
        int left = low;      // starting index of left half of arr
        int right = mid + 1;   // starting index of right half of arr

        // storing elements in the temporary array in a sorted manner
        while (left <= mid && right <= high) {
            if (nums[left] <= nums[right]) {
                temp.push_back(nums[left]);
                left++;
            }
            else {
                temp.push_back(nums[right]);
                right++;
            }
        }

        // if elements on the left half are still left
        while (left <= mid) {
            temp.push_back(nums[left]);
            left++;
        }

        // if elements on the right half are still left
        while (right <= high) {
            temp.push_back(nums[right]);
            right++;
        }

        // transferring all elements from temporary to arr
        for (int i = low; i <= high; i++) {
            nums[i] = temp[i - low];
        }
    }

    int reversePairs(vector<int>& nums, int low, int mid, int high) {
        int cnt = 0;
        int right = mid + 1;
        for (int i = low; i <= mid; i++) {
            while (right <= high && (long)nums[i] > 2 * (long)nums[right]) {
                right++;
            }
            cnt += (right - (mid + 1));
        }
        return cnt;
    }

    int mergeSort(vector<int> &nums, int low, int high) {
        int cnt = 0;
        if (low >= high) return cnt;
        int mid = (low + high) / 2;
        cnt += mergeSort(nums, low, mid);  // left half
        cnt += mergeSort(nums, mid + 1, high); // right half
        cnt += reversePairs(nums, low, mid, high);
        merge(nums, low, mid, high);  // merging sorted halves
        return cnt;
    }

    int reversePairs(vector<int>& nums) {
        int n = nums.size();
        return mergeSort(nums, 0, n - 1);
    }
};

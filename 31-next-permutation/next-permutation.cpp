class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int pivot = -1;

        // Step 1: Find pivot (first decreasing element from right)
        for (int i = n - 1; i > 0; i--) {
            if (nums[i] > nums[i - 1]) {
                pivot = i - 1;
                break;
            }
        }

        // Step 2: If no pivot, array is descending → reverse to smallest order
        if (pivot == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 3: Find rightmost successor greater than pivot
        int swapIdx = -1;
        for (int i = n - 1; i > pivot; i--) {
            if (nums[i] > nums[pivot]) {
                swapIdx = i;
                break;
            }
        }

        // Step 4: Swap pivot and successor
        swap(nums[pivot], nums[swapIdx]);

        // Step 5: Reverse suffix
        reverse(nums.begin() + pivot + 1, nums.end());
    }
};

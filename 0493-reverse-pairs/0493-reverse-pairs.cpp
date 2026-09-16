class Solution {
public:
    int merge(vector<int>& nums, int left, int mid, int right) {
        int i = left;
        int j = mid + 1;
        vector<int> b(right - left + 1);
        int k = 0;
        int cnt = 0;
        while (i <= mid && j <= right) {
            if ((long long)nums[i] > 2LL * nums[j]) {
                cnt += mid - i + 1;
                j++;
            }
            else {
                i++;
            }
        }
        i = left;
        j = mid + 1;
        while (i <= mid && j <= right) {
            if (nums[i] <= nums[j]) {
                b[k++] = nums[i++];
            }
            else {
                b[k++] = nums[j++];
            }
        }
        while (i <= mid) {
            b[k++] = nums[i++];
        }
        while (j <= right) {
            b[k++] = nums[j++];
        }
        k = 0;
        for (int i = left; i <= right; i++) {
            nums[i] = b[k++];
        }
        return cnt;
    }
    int mergesort(vector<int>& nums, int left, int right) {
        if (left >= right) return 0;
        int mid = (left + right) >> 1;
        int cnt = 0;
        cnt += mergesort(nums, left, mid);
        cnt += mergesort(nums, mid + 1, right);
        cnt += merge(nums, left, mid, right);
        return cnt;
    }
    int reversePairs(vector<int>& nums) {
        int n = nums.size();
        return mergesort(nums, 0, n - 1);
    }
};
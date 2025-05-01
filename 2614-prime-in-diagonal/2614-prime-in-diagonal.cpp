class Solution {
public:
    int prime(int num) {
        if (num < 2) return 0;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) return 0;
        }
        return 1;
    }

    int diagonalPrime(vector<vector<int>>& nums) {
        vector<int> v;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            // No need for inner loop (j-loop) since we only deal with diagonals

            if (prime(nums[i][i]) == 1) {
                v.push_back(nums[i][i]);
            }
            if (prime(nums[i][n - i - 1]) == 1) {
                v.push_back(nums[i][n - i - 1]);
            }
        }

        if (!v.empty()) {
            int max_ele = *max_element(v.begin(), v.end());
            return max_ele;
        }
        return 0;
    }
};

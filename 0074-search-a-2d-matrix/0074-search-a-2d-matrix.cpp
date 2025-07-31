class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        for (int i = 0; i < rows; i++) {
            if (target >= matrix[i][0] && target <= matrix[i][cols - 1]) {
                int low = 0, high = cols - 1;
                while (low <= high) {
                    int mid = low + (high - low) / 2;
                    if (matrix[i][mid] == target) return true;
                    else if (matrix[i][mid] < target) low = mid + 1;
                    else high = mid - 1;
                }
            }
        }

        return false;
    }
};

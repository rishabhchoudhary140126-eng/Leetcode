class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low = 0;
        int high = matrix.size()-1;
        int row = high;
        while(low<=high){
            int mid = low + (high-low)/2;

            if(matrix[mid][0]>target){
                high = mid - 1;
            }
            if(matrix[mid][0]<=target){
                row = mid;
                low = mid+1;
            }
        }

        low = 0;
        high = matrix[row].size() - 1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(matrix[row][mid]==target) return true;
            else if (matrix[row][mid] < target) low = mid + 1;
            else high = mid - 1;
        }
        return false;
    }
};
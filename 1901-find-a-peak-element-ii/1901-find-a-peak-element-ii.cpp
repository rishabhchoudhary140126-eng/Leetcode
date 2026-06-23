class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {

        int low = 0;
        int high = mat[0].size()-1;

        while(low<=high){
            int mid = low + (high-low)/2;

            int row = -1;
            int current = INT_MIN;
            for(int i=0; i<mat.size(); i++){
                if(mat[i][mid]>current) {
                    current = mat[i][mid];
                    row = i;
                }
            }


            int left = 0;
            int right = 0;
            if(mid-1>=0) left =  mat[row][mid-1];
            else left = -1;

            if (mid< mat[row].size()-1) right = mat[row][mid+1];
            else right = -1;

            if(mat[row][mid]>left && mat[row][mid] > right) return {row, mid};
            else if(mat[row][mid]< right) low = mid + 1;
            else if(mat[row][mid]< left) high = mid - 1;
        }
        return {-1,-1};
    }
};
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        bool isOdd = false;
        if(mat.size()%2 != 0) isOdd = true;
        int n = mat.size();
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += mat[i][i];
        }
        for(int i =0; i<n; i++){
            if(isOdd && i == n/2) continue;
            sum += mat[n-1-i][i];
        }
        return sum;
    }
};
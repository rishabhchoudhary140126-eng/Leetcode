class Solution {
public:
    int pivotInteger(int n) {
        for(int i = n; i>0; i--){
            int lhs = 0; int rhs = 0;
            for(int j=i; j<=n; j++){
                rhs = rhs + j;
            }
            for(int j = 0; j<=i; j++){
                lhs = lhs + j;
            }
            if(lhs == rhs){
                return i;
            }
        }
        return -1;

    }
};
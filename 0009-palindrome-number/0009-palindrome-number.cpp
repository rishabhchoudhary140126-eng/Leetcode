class Solution {
public:
    bool isPalindrome(int x) {
        string y = to_string(x);
        int a = 0;
        int b = y.size() - 1;
        for(int i = 0; i<y.size()/2; i++){
            if(y[a] != y[b]){
                return false;
            }
            a++;
            b--;
        }
        return true;
    }
};
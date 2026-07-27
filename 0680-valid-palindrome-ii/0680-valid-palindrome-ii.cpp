class Solution {
public:
    bool check(string s, int low, int high){

        while(low<high){
            if(s[low] == s[high]){
                low++;
                high--;
            }
            else return false;
        }

        return true;;
    }
    bool validPalindrome(string s) {
        int low = 0;
        int high = s.size()-1;
        while(low<high){
            if(s[low] == s[high]) {
                low++;
                high--;
                continue;
            }
            else if(check(s, low+1, high) || check(s, low, high-1)) return true;
            else return false;
        }
        return true;
    }
};
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if(n == 0) return 0;
        if(n == 1) return 1;
        int left = 0;
        int right = 0;
        int maxLen = 1;
        while(left<=n-1 && right<=n-1){
            int current = right + 1;
            if(current>=n) break;
            bool is_unique = true;
            for(int i= left; i<=right; i++){
                if(s[current] == s[i]){
                    is_unique = false;
                    break;
                }
            }
            if(is_unique) right = current;
            else {
                left++;
            };

            if(right - left + 1> maxLen) maxLen = right - left + 1;

        }
        return maxLen;
    }
};
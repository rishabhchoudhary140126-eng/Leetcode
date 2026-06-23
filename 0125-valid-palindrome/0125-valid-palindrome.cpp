class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0; i<s.size(); i++){
            int a = s[i];
            if((a>=65 && a<= 90) || (a>=97 && a<=122) || (a>=48 && a<=57)){
            }
            else{
                s.erase(i,1);
                i--;
            }
        }
        for(int i=0; i<(s.size())/2; i++){
            int a = s[i];
            int b = s[s.size()-1-i];
            if(a != b){
                if((max(a,b)-min(a,b) == 32) && (min(a,b)>=65 && min(a,b)<=90)){
                }
                else{
                    return false;
                }                
            }
        }
        return true;

    }
};
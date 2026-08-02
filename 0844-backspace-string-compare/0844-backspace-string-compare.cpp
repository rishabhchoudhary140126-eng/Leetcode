class Solution {
public:

    bool backspaceCompare(string s, string t) {
        vector <char> ans1;
        vector <char> ans2;
        int current1 = 0;
        int current2 = 0;
        int n = s.size();        
        int m = t.size();        

        for(int i=n-1; i>=0; i--){
            if(s[i] == '#') {
                current1++;
                continue;
            }
            else if(current1>0){
                current1--;
            }
            else{
                ans1.push_back(s[i]);
            }
        }
        for(int i=m-1; i>=0; i--){
            if(t[i] == '#') {
                current2++;
                continue;
            }
            else if(current2>0){
                current2--;
            }
            else{
                ans2.push_back(t[i]);
            }
        }

        if(ans1.size() != ans2.size()) return false;

        for(int i=0; i<ans1.size(); i++){
            if(ans1[i] != ans2[i]){
                return false;
            }
        }
        return true;
    }
};
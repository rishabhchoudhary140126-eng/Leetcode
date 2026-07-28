class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        vector <int> freqS(26, 0);
        for(int i=0; i<s.size(); i++){
            freqS[(int)s[i] - 'a']++;
        }
        vector <int> freqT(26, 0);
        for(int i=0; i<t.size(); i++){
            freqT[(int)t[i] - 'a']++;
        }
        for(int i=0; i<26; i++){
            if(freqS[i] != freqT[i]) return false;
        }
        return true;
    }
};
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector <string> ans;
        if(nums.size() == 0) return ans;
        long current = nums[0];
        int start = 0;
        int end = -1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == current){
                end++;
                current++;
            }
            else{
                if(start == end) ans.push_back(to_string(nums[start]));
                else ans.push_back(to_string(nums[start]) + "->" + to_string(nums[end]));
                start = end + 1;
                end = end+1;
                current = (long)nums[i] + 1;
            }
        }
        if(start == end)
            ans.push_back(to_string(nums[start]));
        else
            ans.push_back(to_string(nums[start]) + "->" + to_string(nums[end]));

        return ans;

    }
};
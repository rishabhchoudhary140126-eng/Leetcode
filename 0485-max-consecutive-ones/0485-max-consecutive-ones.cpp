class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0; 
        int current = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0) {
                current =0;
                continue;
            }
            else{
                current++;
                if(current>ans) ans = current;
            }
        }
        return ans;
    }
};
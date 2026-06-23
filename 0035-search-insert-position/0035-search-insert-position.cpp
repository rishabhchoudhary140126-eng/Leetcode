class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans = nums.size();
        int low = 0; 
        int high = ans - 1;
        while(low<=high){
            if(nums[low + (high-low)/2]>= target){
                ans = low + (high-low)/2;
                high = low + (high-low)/2 -1;
            }
            else{
                low = low + (high-low)/2 + 1;
            }
            
        }
        return ans;
    }
};
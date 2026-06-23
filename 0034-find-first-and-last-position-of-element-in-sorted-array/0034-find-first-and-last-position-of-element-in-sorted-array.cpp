class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0; 
        int high = nums.size() - 1;
        int lower_bound = -1;
        int upper_bound = -1;

        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]==target){
                lower_bound = mid;
                high = mid-1;
            }
            else if(nums[mid]<target){
                low = mid +1;
            }
            else{
                high = mid - 1;
            }
        }

        low = 0; 
        high = nums.size() - 1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]==target){
                upper_bound = mid;
                low = mid+1;
            }
            else if(nums[mid]<target){
                low = mid +1;
            }
            else{
                high = mid - 1;
            }
        }
        return {lower_bound, upper_bound};
    }
};
class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        int smallest = nums[low];
        while(low<=high){
            int mid = low + (high-low)/2;
            
            if(nums[mid]>=nums[low]){
                smallest = min(nums[low], smallest);
                low = mid+1;
            }
            else if(nums[mid]<=nums[high]){
                smallest = min(nums[mid], smallest);
                high = mid-1;
            }
        }
        return smallest;
    }
};
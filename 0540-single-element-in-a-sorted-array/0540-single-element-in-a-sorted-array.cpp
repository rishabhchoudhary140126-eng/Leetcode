class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0; 
        int high=nums.size()-1;

        if(low == high) return nums[low];
        while(low<=high){
            int mid = low + (high-low)/2;
            if(mid==0){
                if(nums[mid] != nums[mid+1]) return nums[mid];
            }
            if(mid == nums.size()-1){
                if(nums[mid] != nums[mid-1]) return nums[mid];
            }
            if(nums[mid] != nums[mid+1] && nums[mid] != nums[mid-1]) return nums[mid];


            if(nums[mid] == nums[mid-1]){
                if((mid-low)%2 != 0){
                    low = mid+1;
                }
                else high = mid-2;
            }
            else if(nums[mid] == nums[mid+1]){
                if((high-mid)%2 != 0) high = mid-1;
                else low = mid+2;
            }

        }
        return -1;
    }
};
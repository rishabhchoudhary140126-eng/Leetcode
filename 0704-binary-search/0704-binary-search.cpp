class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() -1;
        while(low<=high){
            
            if(nums[ low + (high - low)/2] == target) return  low + (high - low)/2;
            else if( nums[ low + (high - low)/2]>target) high =  low + (high - low)/2 - 1;
            else if( nums[ low + (high - low)/2]<target) low =  low + (high - low)/2 + 1;
            else return -1;
        }
        return -1;
    }
};
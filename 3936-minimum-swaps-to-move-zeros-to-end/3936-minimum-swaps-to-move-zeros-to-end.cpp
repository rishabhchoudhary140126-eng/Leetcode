class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int zeroes = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0) zeroes++;
        }
        int k=zeroes;
        for(int i= nums.size()-zeroes; i<nums.size(); i++){
            if(nums[i]==0) zeroes--;
        }
        return zeroes;
        
    }
};
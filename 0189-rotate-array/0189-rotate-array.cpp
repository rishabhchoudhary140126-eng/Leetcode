class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector <int> new_nums;
        k = k % nums.size();
        new_nums = nums;
        for(int i = 0; i<nums.size()-k; i++){
            nums[i+k] = new_nums[i];
        }
        for(int i=0; i<k; i++){
            nums[i]=new_nums[nums.size()-k+i];
        }
    }
};
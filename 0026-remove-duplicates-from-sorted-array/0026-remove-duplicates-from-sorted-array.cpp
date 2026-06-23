class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector <int> v;
        int current = INT16_MIN;
        for(int i = 0; i<nums.size(); i++){
           if(nums[i] != current){
                current = nums[i];
                v.push_back(current);
            }
        }
    nums = v;
    return v.size();
    }
};
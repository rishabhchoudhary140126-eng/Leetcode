class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map <int, int> um;
        for(int i=0; i<nums.size(); i++){
            um[nums[i]] = 0;
        }
        for(int i=0; i<nums.size(); i++){
            um[nums[i]]++;
        }
        for(auto i:um){
            if(i.second == 1) return i.first;
        }
        return -1;
    }
};
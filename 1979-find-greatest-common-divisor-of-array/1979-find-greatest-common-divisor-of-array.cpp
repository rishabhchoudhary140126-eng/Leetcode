class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int low = nums[0];
        long high = nums[nums.size()-1];
        int ans = gcd(high, low);
        return ans;
    }
};
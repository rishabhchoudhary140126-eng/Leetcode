class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector <int> freq(101,0);

        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
        }
        //prefix sum
        for(int i=1; i<freq.size(); i++){
            freq[i] = freq[i] + freq[i-1];
        }

        vector <int> ans;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0) ans.push_back(0);
            else ans.push_back(freq[nums[i]-1]);
        }

        return ans;


    }
};
class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector <int>prefixGcd;
        int mx = 0;
        for(int i=0; i<nums.size(); i++){
            mx = max(mx, nums[i]);
            int a = nums[i];
            int b = mx;
            //calculating gcd:
            while(b>0){
                int rem = a%b;
                a = b;
                b = rem;
            }
            prefixGcd.push_back(a);
        }
        sort(prefixGcd.begin(), prefixGcd.end());
        int low = 0;
        int high = prefixGcd.size() - 1;
        long sum = 0;
        while(low<high){
            while(prefixGcd[low]>0){   
                int rem = prefixGcd[high] % prefixGcd[low];
                prefixGcd[high] = prefixGcd[low];
                prefixGcd[low] = rem;
            }
            sum += prefixGcd[high];
            low++;
            high--;
        }
        return sum;
    }
};
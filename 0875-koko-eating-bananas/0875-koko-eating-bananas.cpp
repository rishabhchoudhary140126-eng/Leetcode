class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = 1;
        for(int i=0; i<piles.size(); i++){
            high = max(high, piles[i]);
        }
        int ans = high;

        while(low<=high){
            int mid = low + (high-low)/2;
            //check total no. of hours
            long total_time = 0;

            for(int i=0; i<piles.size(); i++){
                int k = ceil((double)piles[i] / mid);
                total_time = total_time + k;
            }

            if(total_time>h) low = mid + 1;
            else if(total_time<=h) {
                high = mid-1;
                ans = mid;
                }
        }
        return ans;
    }
};
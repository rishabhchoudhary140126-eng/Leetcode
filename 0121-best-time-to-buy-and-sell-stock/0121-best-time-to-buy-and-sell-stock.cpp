class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector <int> bestBuy;
        bestBuy.push_back(INT_MAX);
        for(int i=1; i<prices.size(); i++){
            bestBuy.push_back(min(bestBuy[i-1], prices[i-1]));
        }
        int ans =0;
        for(int i=0; i<prices.size(); i++){
            int profit = prices[i] - bestBuy[i];
            ans = max(ans, profit);
        }
        return ans;
    }
};
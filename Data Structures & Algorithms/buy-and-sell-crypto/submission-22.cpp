class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() <= 1){return 0;}
        int i = 0;
        int r = i + 1;
        int maxProfit = 0;
        while(r < prices.size()){
            while(prices[r] - prices[i] <= 0 && i < r){
                i++;
            }
            maxProfit = max(maxProfit, prices[r]-prices[i]);
            r++;
        }
        return maxProfit;
    }
};

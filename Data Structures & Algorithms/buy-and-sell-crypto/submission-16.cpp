class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //start l at 0 & r at 1 or l+1
        if(prices.size() <= 1){
            return 0;
        }

        int l = 0;
        int r = 1;
        int maxProfit = max(0, prices[r] - prices[l]);
        //move the left if profit is less than 0
        //continue to grow window right if right+1 > right
        while(r < prices.size()){
            if(prices[r] - prices[l] > 0){
                maxProfit = max(maxProfit, prices[r] - prices[l]);
            }else{
                l = r;
            } 
            r++;
        }
        return maxProfit;
    }
};

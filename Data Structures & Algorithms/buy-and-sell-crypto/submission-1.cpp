class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int buy = 0;
        int sell = 1;

        while(sell<prices.size()){
            if(prices[buy] < prices[sell]){
                int new_profit = prices[sell]-prices[buy];
                max_profit = max(max_profit,new_profit);
            }else{
                buy = sell;
            }
            sell++;
        }
        return max_profit;
    }
};

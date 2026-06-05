class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfitValue = 0;

        for(int i = 1; i < prices.size(); i++){
            if(prices[i] < minPrice){
                minPrice = prices[i];
            }
            else if(prices[i] - minPrice > maxProfitValue){
                maxProfitValue = prices[i] - minPrice;
            }
        }

        return maxProfitValue;
    }
};

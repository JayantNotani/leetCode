// Best Time to Buy and Sell Stock II

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0], profit = 0, length = prices.size() - 1;
		for(int i = 1; i <= length; ++i) {
			if(prices[i] < prices[i - 1]) {
				if(buy < prices[i - 1])
					profit += prices[i - 1] - buy;
				buy = prices[i];
			}
		}
		if(buy < prices[length])
					profit += prices[length] - buy;
		return profit;
    }
};

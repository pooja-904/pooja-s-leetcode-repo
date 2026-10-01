class Solution {
public:
  int maxProfit(vector<int> &prices) {
    int lowest = prices[0], bestPrice = 0;
    for (int i = 1; i < prices.size(); i++) {
      if (prices[i] < lowest)
        lowest = prices[i];
      else
        bestPrice = max(bestPrice, prices[i] - lowest);
    }
    return bestPrice;
  }
};

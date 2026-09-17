class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int minp = INT_MAX;
    int maxP = 0;
    for (int i = 0; i < prices.size(); i++)
    {
       int currentP = prices[i];
       if(currentP < minp){
        minp = currentP;
        }
      int currentProfit = currentP - minp;

      if(maxP < currentProfit){
        maxP = currentProfit;
      }

    }
    return maxP;
    }
};
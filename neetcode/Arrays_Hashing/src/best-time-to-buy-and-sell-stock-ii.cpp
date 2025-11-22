class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {

        int profit = 0, buy = -1, sell = 0;
        prices.push_back(0);

        for (int i = 0; i < prices.size() - 1; i++)
        {
            if (prices[i] < prices[i + 1] && buy == -1)
            {
                buy = prices[i];
            }
            else if (buy != -1 && prices[i] > prices[i + 1])
            {
                sell = prices[i];
                profit += sell - buy;
                buy = -1;
            }
        }

        return profit;
    }
};
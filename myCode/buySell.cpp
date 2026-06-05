#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> prices)
    {
        int maxP = 0;
        int minBuy = prices[0];

        for (int sell : prices)
        {
            int profit = sell - minBuy;
            maxP = max(maxP, profit);
            minBuy = min(minBuy, sell);
        }

        return maxP;
    }
};

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    Solution obj;
    int profit = obj.maxProfit(prices);

    cout << "Maximum Profit: " << profit << endl;

    return 0;
}
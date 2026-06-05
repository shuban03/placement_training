#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
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
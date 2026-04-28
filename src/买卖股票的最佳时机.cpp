#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices)
{
	int minPrice = prices[0];
	int maxProfit = 0;

	for (int i = 1; i < prices.size(); i++)
	{
		minPrice = min(minPrice, prices[i]);

		// 计算当前利润
		int profit = prices[i] - minPrice;

		// 更新最大利润
		maxProfit = max(maxProfit, profit);
	}

	return maxProfit;
}
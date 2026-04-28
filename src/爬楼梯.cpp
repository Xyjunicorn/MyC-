#include <iostream>
#include <vector>

using namespace std;

int climbStairs(int n)
{
	if (n <= 2)
	{
		return n;
	}
	vector<int> dp(n + 1);
	dp[1] = 1;
	dp[2] = 2;

	for (int i = 3; i <= n; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	return dp[n];
}

int climbStairs_plus(int n)
{
	if (n <= 2)
	{
		return n;
	}
	int a = 1;
	int b = 2;
		
	int dp = 0;

	for (int i = 3; i <= n; i++)
	{
		dp = a + b;
		a = b;
		b = dp;
	}

	return dp;
}
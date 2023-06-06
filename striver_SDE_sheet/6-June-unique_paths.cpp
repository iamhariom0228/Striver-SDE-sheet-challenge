#include <bits/stdc++.h> 
int helper(vector<vector<int>>& dp, int m, int n, int i, int j){
	if(i==m-1 && j==n-1) return 1;
	if(i>=m || j>=n) return 0;
	if(dp[i][j] != -1) return dp[i][j];
	int ways = helper(dp, m, n, i, j+1) + helper(dp, m, n, i+1, j);
	return dp[i][j] = ways;
}
int uniquePaths(int m, int n) {
	// Write your code here.
	vector<vector<int>> dp(m, vector<int>(n, -1));
	return helper(dp, m, n, 0, 0);
}
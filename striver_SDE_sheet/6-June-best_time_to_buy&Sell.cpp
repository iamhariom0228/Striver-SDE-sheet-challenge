#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int maxProfit = 0, minPrice = prices[0];
    for(int i=1;i<prices.size();i++){
        maxProfit = max(maxProfit, prices[i]-minPrice);
        minPrice = min(minPrice, prices[i]);
    }
    return maxProfit;
}
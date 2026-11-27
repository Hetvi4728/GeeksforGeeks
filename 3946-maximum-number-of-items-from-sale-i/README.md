# [3946. Maximum Number of Items From Sale I](https://leetcode.com/problems/maximum-number-of-items-from-sale-i/)

- **Difficulty**: Medium
- **Contest Elo Rating**: `1728` (WC 504 Q2)
- **Companies**: Microsoft

## Solution (cpp)
```cpp

class Solution {
public:
    int maximumSaleItems(vector<vector<int>>& items, int budget) {
        int n = items.size();
        int minPrice = INT_MAX;

        vector<int> freeCnt(n, 0);

        // Count free items for each item type
        for (int i = 0; i < n; i++) {
            minPrice = min(minPrice, items[i][1]);

            for (int j = 0; j < n; j++) {
                if (i != j && items[j][0] % items[i][0] == 0) {
                    freeCnt[i]++;
                }
            }
        }

        // dp[c] = maximum items obtained by spending exactly c
        const int NEG = -1e9;
        vector<int> dp(budget + 1, NEG);
        dp[0] = 0;

        // 0/1 Knapsack: buy the first copy of each item type
        for (int i = 0; i < n; i++) {
            int price = items[i][1];
            int gain = freeCnt[i] + 1;

            for (int c = budget; c >= price; c--) {
                if (dp[c - price] != NEG) {
                    dp[c] = max(dp[c], dp[c - price] + gain);
                }
            }
        }

        int ans = 0;

        // Spend remaining budget on the cheapest item
        for (int c = 0; c <= budget; c++) {
            if (dp[c] != NEG) {
                int extra = (budget - c) / minPrice;
                ans = max(ans, dp[c] + extra);
            }
        }

        return ans;
    }
};

```

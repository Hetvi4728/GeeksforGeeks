# [3411. Maximum Subarray With Equal Products](https://leetcode.com/problems/maximum-subarray-with-equal-products/)

- **Difficulty**: Easy
- **Contest Elo Rating**: `1443` (WC 431 Q1)
- **Companies**: Google

## Solution (cpp)
```cpp

class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            long long product = 1;
            long long gcdVal = 0;
            long long lcmVal = 1;

            for (int j = i; j < n; j++) {
                product *= nums[j];

                gcdVal = gcd(gcdVal, (long long)nums[j]);

                lcmVal = (lcmVal / gcd(lcmVal, (long long)nums[j])) * nums[j];

                if (product == lcmVal * gcdVal) {
                    ans = max(ans, j - i + 1);
                }
            }
        }

        return ans;
    }
};

```

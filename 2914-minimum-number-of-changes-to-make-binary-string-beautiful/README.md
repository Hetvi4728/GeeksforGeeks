# [2914. Minimum Number of Changes to Make Binary String Beautiful](https://leetcode.com/problems/minimum-number-of-changes-to-make-binary-string-beautiful/)

- **Difficulty**: Medium
- **Contest Elo Rating**: `1480` (BWC 116 Q2)
- **Companies**: Google, Microsoft, Meta, Bloomberg

## Solution (cpp)
```cpp

class Solution {
public:
    int minChanges(string s) {
        int ans = 0;

        for (int i = 0; i < s.size(); i += 2) {
            if (s[i] != s[i + 1]) {
                ans++;
            }
        }

        return ans;
    }
};

```

# [2124. Check if All A's Appears Before All B's](https://leetcode.com/problems/check-if-all-as-appears-before-all-bs/)

- **Difficulty**: Easy
- **Contest Elo Rating**: `1202` (WC 274 Q1)
- **Companies**: Microsoft, Bloomberg

## Solution (cpp)
```cpp
class Solution {
public:
    bool checkString(string s) {
        return s.find("ba") == string::npos;
    }
};
```

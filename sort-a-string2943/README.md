# [Sort String](https://leetcode.com/problems/sort-a-string2943/)

- **Difficulty**: DSA

## Solution (cpp)
```cpp
class Solution {
public:
    string sortString(string s) {
        sort(s.begin(), s.end());
        return s;
    }
};
```

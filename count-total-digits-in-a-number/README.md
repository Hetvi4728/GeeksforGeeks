# [Count Digits in Number](https://leetcode.com/problems/count-total-digits-in-a-number/)

- **Difficulty**: DSA

## Solution (cpp)
```cpp
class Solution {
  public:
    int countDigits(int n) {
        if (n == 0)
            return 1;

        int count = 0;

        while (n > 0) {
            count++;
            n /= 10;
        }

        return count;
    }
};
```

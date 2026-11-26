# [3360. Stone Removal Game](https://leetcode.com/problems/stone-removal-game/)

- **Difficulty**: Easy
- **Contest Elo Rating**: `1267` (BWC 144 Q1)

## Solution (cpp)
```cpp

class Solution {
public:
    bool canAliceWin(int n) {
        int stones = 10;
        int turns = 0;

        while (n >= stones) {
            n -= stones;
            stones--;
            turns++;
        }

        return turns % 2 == 1;
    }
};

```

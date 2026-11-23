# [1352. Product of the Last K Numbers](https://leetcode.com/problems/product-of-the-last-k-numbers/)

- **Difficulty**: Medium
- **Contest Elo Rating**: `1474` (WC 176 Q2)
- **Companies**: Google, Amazon, Microsoft, Meta, Bloomberg, Apple, TikTok, ByteDance, Tekion, Cruise Automation

## Solution (cpp)
```cpp

class ProductOfNumbers {
public:
    vector<int> prefix;

    ProductOfNumbers() {
        prefix.push_back(1);
    }

    void add(int num) {
        if (num == 0) {
            prefix.clear();
            prefix.push_back(1);
        } else {
            prefix.push_back(prefix.back() * num);
        }
    }

    int getProduct(int k) {
        if (k >= prefix.size()) {
            return 0;
        }

        return prefix.back() / prefix[prefix.size() - k - 1];
    }
};

```

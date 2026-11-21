# [Parenthesis Checker](https://leetcode.com/problems/parenthesis-checker2744/)

- **Difficulty**: DSA

## Solution (cpp)
```cpp
class Solution {
  public:
    bool isBalanced(string& s) {
        stack<char> st;

        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } 
            else {
                if (st.empty()) {
                    return false;
                }

                char top = st.top();
                st.pop();

                if ((ch == ')' && top != '(') ||
                    (ch == '}' && top != '{') ||
                    (ch == ']' && top != '[')) {
                    return false;
                }
            }
        }

        return st.empty();
    }
};
```

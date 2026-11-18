
class Solution {
  public:
    bool armstrongNumber(int n) {
        int original = n;
        int digits = 0;
        int temp = n;

        while (temp > 0) {
            digits++;
            temp /= 10;
        }

        int sum = 0;
        temp = n;
       
        while (temp > 0) {
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

        return sum == original;
    }
};

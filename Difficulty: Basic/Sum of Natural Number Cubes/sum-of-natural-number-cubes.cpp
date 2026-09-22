class Solution {
  public:
    int sumOfSeries(int n) {
        int cube = 1;
        int sum = 0;
        
        while(n != 0){
            cube = n * n * n;
            sum = sum + cube;
            n = n - 1;
        }
        return sum;
    }
};

class Solution(object):
    def maxLength(self, nums):
        n = len(nums)
        ans = 0

        for i in range(n):
            product = 1
            gcd_val = 0
            lcm_val = 1

            for j in range(i, n):
                product *= nums[j]

                gcd_val = self.gcd(gcd_val, nums[j])

                lcm_val = (lcm_val // self.gcd(lcm_val, nums[j])) * nums[j]

                if product == lcm_val * gcd_val:
                    ans = max(ans, j - i + 1)

        return ans

    def gcd(self, a, b):
        while b:
            a, b = b, a % b
        return a

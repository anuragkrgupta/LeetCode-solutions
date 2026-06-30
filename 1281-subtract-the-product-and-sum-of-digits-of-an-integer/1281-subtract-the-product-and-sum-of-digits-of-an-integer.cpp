class Solution {
public:
    int subtractProductAndSum(int n) {
        int x;
        int prod = 1;
        int sum = 0;

        while (n > 0) {
            x = n % 10;
            prod *= x;
            sum += x;
            n /= 10;
        }

        return prod - sum;
    }
};
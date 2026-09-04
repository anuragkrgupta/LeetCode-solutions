class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2)
            return 0;

        // Only store information for odd numbers
        vector<char> isComposite(n, false);

        int count = 1; // 2 is prime

        // Check only odd numbers
        for (int i = 3; i < n; i += 2) {

            if (!isComposite[i]) {
                count++;

                // Start from i*i
                // Only needed while i*i < n
                if ((long long)i * i < n) {
                    // All multiples of i that are even are already handled
                    // So start from i*i and jump by 2*i
                    for (long long j = (long long)i * i; j < n; j += 2 * i) {
                        isComposite[j] = true;
                    }
                }
            }
        }

        return count;
    }
};
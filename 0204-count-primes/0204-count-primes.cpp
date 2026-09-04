class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2)
            return 0;

        vector<bool> composite(n, false);

        for (int i = 3; (long long)i * i < n; i += 2) {
            if (!composite[i]) {
                for (long long j = (long long)i * i; j < n; j += 2 * i) {
                    composite[j] = true;
                }
            }
        }

        int count = 1;

        for (int i = 3; i < n; i += 2) {
            if (!composite[i])
                count++;
        }

        return count;
    }
};
class Solution {
public:
    vector<bool> primes(int n) {
        vector<bool> arr(n, true);

        arr[0] = false;
        arr[1] = false;

        for (int i = 2; i * i < n; i++) {
            if (arr[i]) {
                for (int j = i * i; j < n; j += i) {
                    arr[j] = false;
                }
            }
        }
        return arr;
    }

    vector<int> closestPrimes(int left, int right) {
        vector<bool> arr = primes(right + 1);

        vector<int> prime;

        for (int i = left; i <= right; i++) {
            if (arr[i]) {
                prime.push_back(i);
            }
        }

        int mini = INT_MAX;
        vector<int> ans = {-1, -1};

        for (int i = 1; i < prime.size(); i++) {
            int diff = prime[i] - prime[i - 1];

            if (diff < mini) {
                mini = diff;
                ans = {prime[i - 1], prime[i]};
            }
        }

        return ans;
    }
};
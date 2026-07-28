class Solution {
public:
    vector<int> constructArray(int n, int k) {
        vector<int> res;
        vector<int> kvalues;
        vector<bool> used(n + 1, false);

        for (int i = k; i > 0; i--) {
            kvalues.push_back(i);
        }

        res.push_back(1);
        used[1] = true;

        bool istrue = true;

        for (int i = 0; i < k; i++) {
            if (istrue) {
                int a = res.back() + kvalues[i];
                res.push_back(a);
                used[a] = true;
                istrue = false;
            }
            else {
                int a = res.back() - kvalues[i];
                res.push_back(a);
                used[a] = true;
                istrue = true;
            }
        }

        for (int i = 1; i <= n; i++) {
            if (!used[i])
                res.push_back(i);
        }

        return res;
    }
};
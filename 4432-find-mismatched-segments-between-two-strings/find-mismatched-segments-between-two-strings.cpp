class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        if (s1 == s2)
            return {};
        vector<vector<string>> res;
        string first = "";
        string second = "";
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] == s2[i]) {
                if (first.size() != 0 && second.size() != 0) {
                    res.push_back({first, second});
                    first = "";
                    second = "";
                }
            } else {
                first += s1[i];
                second += s2[i];
            }
        }
        if (!first.empty() && !second.empty()) {
            res.push_back({first, second});
        }
        return res;
    }
};
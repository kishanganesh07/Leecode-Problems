class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char> um;
        string res;
        int j = 0;
        for (int i = 0; i < key.size(); i++) {
            if (key[i] == ' ') {
                continue;
            } else if (um.find(key[i]) == um.end()) {
                if (97 + j >= 123) {
                    break;
                } else {
                    um[key[i]] = char(97 + j);
                    j++;
                }
            }
        }
        for (auto i : message) {
            if (i == ' ') {
                res += ' ';
            } else {
                res += um[i];
            }
        }

        return res;
    }
};
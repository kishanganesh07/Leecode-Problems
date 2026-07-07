class Solution {
public:
    string simplifyPath(string path) {
        stack<string> v;
        stringstream ss(path);
        string token;

        while (getline(ss, token, '/')) {
            if (token == "" || token == ".") {
                continue;
            }
            else if (token == "..") {
                if (!v.empty()) {
                    v.pop();
                }
            }
            else {
                v.push(token);
            }
        }

        vector<string> temp;

        while (!v.empty()) {
            temp.push_back(v.top());
            v.pop();
        }

        reverse(temp.begin(), temp.end());

        string ans;

        for (string s : temp)
            ans += "/" + s;
        if(ans.empty()){
            return "/";
        }
        return ans;
    }
};
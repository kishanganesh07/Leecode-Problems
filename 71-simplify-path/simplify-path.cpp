class Solution {
public:
    string simplifyPath(string path) {
          vector<string> v;
        stringstream ss(path);
        string token;

        while (getline(ss, token, '/')) {
            if (token == "" || token == ".")
                continue;

            if (token == "..") {
                if (!v.empty())
                    v.pop_back();
            } else {
                v.push_back(token);
            }
        }

        string ans = "";
        for (string s : v)
            ans += "/" + s;

        if(v.empty()){
            return "/";
        }
        else{
            return ans;

        }
     
    }
};
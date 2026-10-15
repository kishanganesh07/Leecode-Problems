class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int>um;
        for (char ch = 'a'; ch <= 'z'; ch++) {
        um[ch] = 0;
    }
    for(auto i : sentence){
        um[i]++;

    }
    for(auto i : um){
        if(i.second==0){
            return false;
        }
    }
    return true;

    }
};
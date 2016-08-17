class Solution {
public:
    string reverseString(string s) {
        string buff;
        for(auto it = s.rbegin(); it != s.rend(); it++)
            buff.push_back(*it);
        return buff;
    }
};
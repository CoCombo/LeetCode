class Solution {
public:
    int titleToNumber(string s) {
        int lenth = s.size();
        int result = 0;
        
        for(int i = 0; i < lenth; i++)
        {
            result += pow(26, lenth - i - 1) * (s[i] - 64);
        }
        
        return result;
    }
};
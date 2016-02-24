class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
            
        int sCount[26] = {0}, tCount[27] = {0};
        int seqSize = s.size();
        /*Use two arrays to count letters of s and t*/
        for(int i = 0; i < seqSize; i++)
        {
            sCount[s[i] - 97]++;
            tCount[t[i] - 97]++;
        }
        /*Valid anagram must have same quantity of each letter*/
        for(int i = 0; i < 26; i++)
        {
            if(sCount[i] != tCount[i])
                return false;
        }
        return true;
    }
};

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.size() == 0 && magazine.size()==0)
            return true;
          
        int magBuff[26]={0};
        
        for(auto it_m=magazine.begin();it_m != magazine.end(); it_m++)
        {
            magBuff[(*it_m)-'a']++;
        }
        
        for(auto it_r=ransomNote.begin(); it_r != ransomNote.end(); it_r++)
        {
            if(magBuff[(*it_r)-'a']-- == 0)
                return false;
        }
        return true;
    }
};
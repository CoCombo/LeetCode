class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0, pos;
        
        /* Catch the last word */
        for(pos = s.size() - 1; pos >= 0 && s[pos] == ' '; pos--);
        /* Accumulate until ' ' */
        for(;s[pos] != ' ' && pos >= 0; pos--)
        {
            length++;
        }
        return length;
    }
};

/* Function call solution */
class Solution {
public:
	int lengthOfLastWord(string s) {
		size_t pos = s.find_last_not_of(' ');
		return pos - s.substr(0, pos + 1).find_last_of(' ');
	}
};

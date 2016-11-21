class Solution {
public:
    bool isValid(string s) {
        stack<char> buff;

    if(s.size() < 2)
        return false;

    for(int i = 0; i < s.size(); i++)
    {
        switch(s[i])
        {
            case '(':
            case '[':
            case '{':
                buff.push(s[i]);
                break;
            case ')':
            case ']':
            case '}':
                if( (!buff.empty()) && (buff.top() + 1 == s[i] || buff.top() + 2 == s[i]) )	//consider about ASCII
                {
                    buff.pop();
                }
                else
                    return false;
        }
    }
    return buff.empty();
    }
};
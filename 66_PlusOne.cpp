class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        /* Store carry-bit */
        int carry = 1;
        
        for(auto rit = digits.rbegin(); rit != digits.rend(); rit++)
        {
            *rit += carry;
            if(*rit > 9)
            {
                carry = *rit - 9;
                *rit -= 10;
            }
            else
                return digits; // Without carry to next bit 
        }
        
        /* Process the top bit */
        if(carry)
            digits.insert(digits.begin(), 1, carry);
        return digits;
    }
};

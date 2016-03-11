class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        
        for(int i = 31; i >= 0; i--)
        {
            result += (n % 2) * (1 << i);	//Here I use (1 << i) rather than pow(2, i), faster.
            n >>= 1;
        }
        
        return result;
    }
};

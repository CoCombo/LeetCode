class Solution {
public:
    int hammingWeight(uint32_t n) {
        int oneBitCount = 0;
        /*Just turn decimalism to binary*/
        while(n != 0)
        {
            if(n % 2 == 1)
                oneBitCount++;
            n /= 2;
        }
        return oneBitCount;
    }
};

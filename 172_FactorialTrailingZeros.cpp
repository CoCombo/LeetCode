class Solution {
public:
    int trailingZeroes(int n) {
        int countZeros = 0;
        
        while(n)
        {
            countZeros += n / 5;
            n /= 5;
        }
        
        return countZeros;
    }
};

/*submission of "Single Number"*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
    int x = 0;
    /*make use of XOR x^x=0, x^0=x*/
    for(auto i : nums)
        x ^= i;
    
    return x;
    }
};

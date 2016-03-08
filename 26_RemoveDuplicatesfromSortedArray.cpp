class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto uniIt = unique(nums.begin(), nums.end());
        
        nums.erase(uniIt, nums.end());
        
        return nums.size();
    }
};

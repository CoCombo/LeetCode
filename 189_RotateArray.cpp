//Solution 1
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k % nums.size() = 0)
            return ;
        for(int i = 0; i < (nums.size() - k % nums.size()); i++)
        {
            nums.push_back(nums[0]);
            nums.erase(nums.begin());
        }
    }
};
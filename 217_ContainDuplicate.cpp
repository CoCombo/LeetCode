class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //int lenth = nums.size();
        
        if(nums.size() < 2)
            return false;
            
        std::sort(nums.begin(), nums.end());
        
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i - 1] == nums[i])
                return true;
        }
        return false;
    }
};
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int seqSize = nums.size();
        
        vector<int> tmp;
        
        if(nums[0] != nums[1])
            tmp.push_back(nums[0]);
        if(nums[seqSize - 1] != nums[seqSize - 2])
            tmp.push_back(nums[seqSize - 1]);
            
        for(int i = 1; i < nums.size() - 1; i++)
        {
            if(nums[i] != nums[i + 1] && nums[i] != nums[i - 1])
                tmp.push_back(nums[i]);
        }
        return tmp;
    }
};
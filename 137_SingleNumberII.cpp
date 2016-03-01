class Solution {
public:
    int singleNumber(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        
        int lenth = nums.size();
        /*Only one num*/
        if(lenth == 1)
            return nums[0];
        /*At the begining*/
        if(nums[0] != nums[1])
            return nums[0];
        /*At the end*/
        if(nums[lenth - 1] != nums[lenth - 2])
            return nums[lenth - 1];
            
        for(int i = 0; i < lenth; i += 3)
        {
            if(nums[i] != nums[i + 1])
                return nums[i];
        }
    }
};

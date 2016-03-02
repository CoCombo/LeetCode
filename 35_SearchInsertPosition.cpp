class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0;
        while(i < nums.size())
        {
            if(target > nums[i])
                i++;
            else
                return i;
        }
        /*Target out of range*/
        return i;
    }
};

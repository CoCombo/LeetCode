class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeroCount = 0;
		/*Delete every 0 in the sequence and count them*/
        for(int i = 0; i < nums.size(); )
        {
            if(nums[i] == 0)
            {
                nums.erase(nums.begin() + i);
                zeroCount++;
            }
            else
                i++;
        }
		/*add these 0 backwards*/
        for(int i = 0; i < zeroCount; i++)
        {
            nums.push_back(0);
        }
    }
};

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int peakNum = nums[0], peakIndex = 0;
        
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] > peakNum)
            {
                peakNum   = nums[i];	//Recode max num
                peakIndex = i;			//Recode index
            }
        }
        
        return peakIndex;
    }
};

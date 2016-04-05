class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(1, 1);
        int backNum = 1;
        
        if(nums.size() == 1)
            return nums;
        
	/*Forward traversal*/
        for(int i = 1; i < nums.size(); i++)
        {
            ans.push_back(ans[i - 1] * nums[i - 1]);
        }
        
	/*Backward traversal*/
        for(int i = nums.size() - 1; i >= 0; i--)
        {
            ans[i]  *= backNum;
            backNum *= nums[i]; 
        }
        
        return ans;
    }
};
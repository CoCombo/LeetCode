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

//Solution 2
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k == 0 || nums.size() <= 1)
            return ;
        
        k %= nums.size();
        rotateSub(nums, 0, nums.size() - 1);
        rotateSub(nums, 0, k - 1);
        rotateSub(nums, k, nums.size() - 1);
    }
    
    void rotateSub(vector<int>& nums, int left, int right)
    {
        while(left < right)
        {
            swap(nums[left], nums[right]);
            left++;
            right--;
        }
    }
};
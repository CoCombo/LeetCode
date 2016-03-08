class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(auto it = nums.begin(); it != nums.end();)
        {
        	
            if(*it == val)
                nums.erase(it); /* Don't increase iterator after erase() */
            else
                it++;
        }
        return nums.size();
    }
};

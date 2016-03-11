/* Common solution, very slow */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int, int> valueToIndex;
        
        for(int i = 0; i < nums.size(); i++)
        {
            int tmp = target - nums[i];
        
            for(int j = nums.size() - 1; j > i; j--)
            {
                if(nums[j] == tmp)		// If we write (nums[j] - nums[i] == target), it will be slower.
                {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
    }

/* Fast solution with map */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int, int> valueToIndex;
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(valueToIndex.find(target - nums[i]) != valueToIndex.end())
            {
                return {valueToIndex[target - nums[i]], i};
            }
            valueToIndex[nums[i]] = i;
            
        }
    }
};

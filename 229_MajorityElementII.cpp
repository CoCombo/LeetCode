class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       map<int, int> buff;
       vector<int> ans;
       
       if(nums.size() == 0)
           return ans;
	   
	   /* Restore nums in map, and count them */
       for(int i = 0; i < nums.size(); i++)
       {
           if(buff.find(nums[i]) != buff.end())
           {
               buff[nums[i]]++;
               //cout << nums[i] << " " << buff[nums[i]] << endl;
           }
           else
           {
               buff.insert(pair<int, int>(nums[i], 1));
           }
       }
	   
	   /* Find the key which >nums.size() */ 
       for(auto it = buff.begin(); it != buff.end(); it++)
       {
           if(it->second > nums.size() / 3)
           {
               ans.push_back(it->first);
           }
       }
       return ans;
    }
};
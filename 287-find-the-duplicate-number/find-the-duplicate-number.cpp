class Solution {
public:

    
    int findDuplicate(vector<int>& nums) 
    {
        unordered_map<int,int>um;
        for(int i=0;i<nums.size();i++)
        {
            if(!um[nums[i]])
            {
                um[nums[i]] = 1;
            }
            else
            {
                return nums[i];
            }
        }
        return 0;  
    }
};
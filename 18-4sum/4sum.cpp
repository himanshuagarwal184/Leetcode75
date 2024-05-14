class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>> s;
        for(int i=0;i<n-3;i++)
        {
            for(int j=i+1;j<n-2;j++)
            {
                int low = j+1,high=n-1;
                long long int nt=(long long)target-((long long)nums[i]+(long long)nums[j]);
                while(low < high)
                {
                    if((nums[low] + nums[high]) < nt)
                    {
                        low++;
                    }
                    else if((nums[low] + nums[high]) > nt)
                    {
                        high--;
                    }
                    else
                    {
                        s.insert({nums[i],nums[j],nums[low],nums[high]});
                        low++;
                        high--;
                    }
                }
            }
        } 
        vector<vector<int>>res;
        for(auto it:s){
            res.push_back(it);
        }
        return res;
    }
};
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) 
    {
        set<int>a,b;
        for(auto x:nums1)
        {
            a.insert(x);
        }    
        for(auto x:nums2)
        {
            b.insert(x);
        }    
        vector<vector<int>> ans(2);
        for(auto x:a)
        {
            if(b.count(x)==0)
            {
                ans[0].push_back(x);
            }
        }
        for(auto x:b)
        {
            if(a.count(x)==0)
            {
                ans[1].push_back(x);
            }
        }
        return ans;
    }
};
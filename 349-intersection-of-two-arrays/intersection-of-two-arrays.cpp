class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0,j=0,m=nums1.size(),n=nums2.size();
        set<int>a;
        while(i<m && j<n)
        {
            if(nums1[i]==nums2[j])
            {
                a.insert(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]>nums2[j])
            {
                j++;
            }
            else
            {
                i++;
            }
        }
        vector<int>res;
        for(auto x:a)
        {
            res.push_back(x);
        }
        return res;
    }
};
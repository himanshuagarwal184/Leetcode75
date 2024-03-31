class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) 
    {
        long long res=0;
        int maxx=-1,minn=-1;
        int n=nums.size();   
        for(int r=0,l=0;r<n;r++)
        {
            int x=nums[r];
            if(x<minK || x>maxK)
            {
                l=r+1;
                continue;
            }
            if(x==maxK) maxx=r;
            if(x==minK) minn=r;
            res+=max((min(maxx,minn)-l+1),0);
        }
        return res;
    }
};
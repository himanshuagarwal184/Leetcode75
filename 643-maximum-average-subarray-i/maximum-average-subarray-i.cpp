class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
        int n=nums.size();
        double ans=0.0,w=0.0;
        for(int i=0;i<k;i++)
        {
            w+=nums[i];
        }    
        ans=w/k;
        for(int r=k;r<n;r++)
        {
            w=w+nums[r]-nums[r-k];
            ans=max(w/k,ans);
        }
        return ans;
    }
};
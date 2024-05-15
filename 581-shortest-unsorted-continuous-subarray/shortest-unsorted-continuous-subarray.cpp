class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) 
    {
        int minn=INT_MAX,maxx=INT_MIN;
        int n=nums.size();
        if(n==1)
        {
            return 0;
        }
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                if(nums[i]>nums[i+1])
                {
                    minn = min(nums[i],minn);
                    maxx = max(nums[i],maxx);
                }   
            }
            else if(i==n-1)
            {
                if(nums[i]<nums[i-1])
                {
                    minn = min(nums[i],minn);
                    maxx = max(nums[i],maxx);
                }
            }
            else 
            {
                if(nums[i]>nums[i+1] || nums[i]<nums[i-1])
                {
                    minn = min(nums[i],minn);
                    maxx = max(nums[i],maxx);
                }
            }
        }   
        if(minn == INT_MAX || maxx==INT_MIN)
        {
            return 0;
        }
        int i,j; 
        for(i=0;i<n && nums[i]<=minn;i++);
        for(j=n-1;j>=0 && nums[j]>=maxx;j--);
        return j-i+1;
    }
};
class Solution {
public:
    int mini(int a,int b)
    {
        if(a<b)
        {
            return a;
        }
        return b;
        
    }
    int maxi(int a,int b)
    {
        if(a<b)
        {
            return b;
        }
        return a;
        
    }
    bool increasingTriplet(vector<int>& nums) 
    {
        int n=nums.size();
        if(n<=2)
        {
            return false;
        }   
        vector<int> min(n),max(n);
        min[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            min[i]=mini(min[i-1],nums[i]);
        }
        max[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            max[i]=maxi(max[i+1],nums[i]);
        }
        for(int i=1;i<n-1;i++)
        {
            if(min[i] < nums[i] && nums[i] < max[i])
            {
                return true;
            }
        }
        return false;
    }
};
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>res(n,0);
        int mul=1,c=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                c++;
                if(c==2)
                {
                    return res;
                }
            }
            else{
                mul*=nums[i];
            }
        }
        if(c==1)
        {
            for(int i=0;i<n;i++)
            {
                if(nums[i]==0)
                {
                    res[i]=mul;
                    return res;
                }
            }
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                res[i] = mul / nums[i];
            }
        }
        return res;
    }

};
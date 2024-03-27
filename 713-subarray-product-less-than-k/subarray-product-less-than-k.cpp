class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k)
    {
        int n=nums.size();
        int x=0;
        int i=0,j=0;
        int prod=1;
       if(k<=1) return 0;
        while(i<n)
        {
            prod*=nums[i];
            while(prod>=k)
            {
                prod/=nums[j++];
            }
                
            x+=1+(i-j);
            i++;
        }
        return x;
    }
};
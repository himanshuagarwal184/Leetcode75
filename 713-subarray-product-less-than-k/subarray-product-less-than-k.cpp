class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k)
    {
        int n=nums.size();
        int x=0;
        for(int i=0;i<n;i++)
        {
            int pro=1;
            for(int j=i;j<n;j++)
            {
                pro*=nums[j];
                if(pro>k-1)
                {
                    break;
                }
                x++;
            }
        }   
        return x;
    }
};
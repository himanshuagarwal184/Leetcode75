class Solution {
public:

    int maxx(int a,int b,int c)
    {
        return max(max(a,b),max(b,c));
    }
    int minn(int a,int b,int c)
    {
        return min(min(a,b),min(b,c));
    }
    int maxProduct(vector<int>& nums) {
        int res = *max_element(nums.begin(),nums.end());
        int currMax=1,currMin=1;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                currMax=1,currMin=1;
            }
            int temp=currMax;
            currMax = maxx(nums[i]*currMax,nums[i]*currMin,nums[i]);
            currMin = minn(nums[i]*temp,nums[i]*currMin,nums[i]);
            res=max(currMax,res);
        }
        return res;
    }
};
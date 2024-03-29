class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>pre;
        vector<int>post(n);
        vector<int>ans(n);
        pre.push_back(nums[0]);
        post[n-1]=nums[n-1];
        for(int i=1;i<n;i++)
        {
            pre.push_back(pre[i-1] * nums[i]);
            post[n-i-1]=post[n-i]*nums[n-i-1];
        }   
        for(int i=1;i<n-1;i++)
        {
            ans[i]=pre[i-1]*post[i+1];

        }
       ans[0]=post[1];
       ans[n-1]=pre[n-2];
        return ans;
    }

};
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        vector<int>pre;
        vector<int>post(nums.size());
        vector<int>ans(nums.size());
        pre.push_back(nums[0]);
        post[nums.size()-1]=nums[nums.size()-1];
        for(int i=1;i<nums.size();i++)
        {
            pre.push_back(pre[i-1] * nums[i]);
            post[nums.size()-i-1]=post[nums.size()-i]*nums[nums.size()-i-1];
        }   
        for(auto x:pre)
        {
            cout<<x<<" ";
        }
        cout<<endl;
        for(auto x:post)
        {
            cout<<x<<" ";
        }
        for(int i=1;i<nums.size()-1;i++)
        {
            ans[i]=pre[i-1]*post[i+1];

        }
       ans[0]=post[1];
       ans[nums.size()-1]=pre[nums.size()-2];
        return ans;
    }

};
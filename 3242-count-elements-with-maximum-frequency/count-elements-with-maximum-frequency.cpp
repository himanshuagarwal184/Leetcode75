class Solution {
public:
    int maxFrequencyElements(vector<int>& nums)
    {
        int maxx=*max_element(nums.begin(),nums.end());
        cout<<maxx;
        vector<int>count(maxx+1,0);
        cout<<count[0];
        for(int i=0;i<nums.size();i++)
        {
            count[nums[i]]++;
        }
        int res=*max_element(count.begin(),count.end());
        int ans=0;
        for(int i=0;i<count.size();i++)
        {
            if(count[i]==res)
            {
                ans+=res;
            }
        }
        return ans;

    }
};
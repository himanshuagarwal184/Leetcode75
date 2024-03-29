class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) 
    {
       long long int maxx=*max_element(nums.begin(),nums.end());
       long long int left=0,right=0,count=0,ans=0;
       while(right<nums.size())
       {
            if(nums[right] == maxx)
            {
                count++;
            }
            while(count>=k)
            {
                if(nums[left] == maxx)
                {
                    count--;
                }
                left++;
                ans+= nums.size()-right;
            }
            right++;
       }
       return ans;
    }
};
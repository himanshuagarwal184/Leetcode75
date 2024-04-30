class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0,sum=0,r=0;
        int minn=INT_MAX;
        while(r<nums.size()){
            sum+=nums[r];
            while(sum>=target){
                minn = min(minn,r-l+1);
                sum-=nums[l];
                l++;
            }
            r++;
        }
        if(minn==INT_MAX){
            return 0;
        }
        return minn;
    }
};
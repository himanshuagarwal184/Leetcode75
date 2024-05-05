class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        int pro = nums[0]*nums[1];
        if(pro*nums[n] > nums[n]*nums[n-1]*nums[n-2])
        {
            return pro*nums[n];
        }
        return nums[n]*nums[n-1]*nums[n-2];
    }
};
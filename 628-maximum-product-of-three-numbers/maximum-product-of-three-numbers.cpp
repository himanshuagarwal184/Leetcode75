class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        int pro1 = nums[0]*nums[1]*nums[n];
        int pro2 = nums[n]*nums[n-1]*nums[n-2];
        return max(pro1,pro2);
    }
};
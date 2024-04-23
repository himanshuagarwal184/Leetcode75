class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums)
    {
        vector<int>res(nums.size());
        int i=0,j=nums.size()-1,curr=nums.size()-1;

        while(i<=j)
        {
            if(abs(nums[i]) >= abs(nums[j]))
            {
                res[curr--]=nums[i]*nums[i];
                i++;
            }
            else
            {
                res[curr--]=nums[j]*nums[j];
                j--;
            }
        }   
        return res;
    }
};
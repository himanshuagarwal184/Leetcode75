class Solution {
public:
    int search(vector<int>& nums, int target)
    {
        
        int low=0,high=nums.size()-1;
        if(high==0){
            if(nums[0]==target){
                return 0;
            }
            return -1;
        }
        int mid=mid = low + (high-low)/2;;
        while(mid<=high){
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                low = mid+1;
            }
            else{
                high=mid-1;
            }
            mid = low + (high-low)/2;
        }
        if(nums[mid]==target){

            return mid;
        }
        return -1;
    }
};
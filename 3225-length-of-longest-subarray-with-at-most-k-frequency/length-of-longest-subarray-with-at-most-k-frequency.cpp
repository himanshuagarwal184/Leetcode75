class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int ans=0;
        unordered_map<int,queue<int>>fo;
        int n=size(nums);
        for(int l=0,r=0;r<n;r++){
            fo[nums[r]].push(r);

       
            if(fo[nums[r]].size()==k+1){
             
                if(fo[nums[r]].front()>=l){
                    l=fo[nums[r]].front()+1;
                }
                fo[nums[r]].pop();
            }
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};
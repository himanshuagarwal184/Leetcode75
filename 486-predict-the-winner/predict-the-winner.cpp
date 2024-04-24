class Solution {
public:
    int score(vector<int>& nums,int i, int j,int turn)
    {
        if(i>j){
            return 0;
        }
        if(turn==0){
            int s1=nums[i]+score(nums,i+1,j,1);
            int s2=nums[j] + score(nums,i,j-1,1);
            return max(s1,s2);
        }
        else
        {
            int s1=score(nums,i+1,j,0);
            int s2=score(nums,i,j-1,0);
            return min(s1,s2);   
        }
    }
    bool predictTheWinner(vector<int>& nums) 
    {
        int p1=0,p2=0;
        int i=0,j=nums.size()-1;
        if(score(nums,i,j,0) >= score(nums,i,j,1)){
            return true;
        }
        return false;
    }
};
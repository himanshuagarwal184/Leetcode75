class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        
        vector<int>count(3);
        for(int i=0;i<nums.size();i++)
        {
            count[nums[i]]++;
        }  
        int k=0;
        for(int i=0;i<3;i++){
            int x=count[i];
            for(int j=0;j<x;j++){
                nums[k]=i;
                k++;
            }
        }
    }
};
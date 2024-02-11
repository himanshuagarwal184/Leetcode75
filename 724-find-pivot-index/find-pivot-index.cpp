class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        int s=-1,lsum=0,rsum=0;
        int i=0,j=nums.size();
       if(j==2)
       {
           if(nums[1]==0)
           {
               return 0;
           }
           if(nums[0]==0)
           {
               return 1;
           }
           return -1;
       }
        for(int k=1;k<j;k++)
        {
            rsum+=nums[k];
        }
        while(i<j){
            if(lsum==rsum)
            {
                break;
            }
            cout<<i<<" "<<lsum<<" "<<rsum<<endl;
            lsum+=nums[i];
            rsum=rsum-nums[i+1];
            i++;

        }
        if(lsum==rsum)
        {
           return i;
        }
        return -1;

    }
};
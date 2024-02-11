class Solution {
public:
    int longestSubarray(vector<int>& arr) 
    {
        int ans=INT_MIN,i=0,j=0,n=arr.size(),w=0;
        while(j<n)
        {
            if(arr[j]==0)
            {
                w++;
            }
            while(w>1)
            {
                if(arr[i]==0)
                {
                    w--;
                }
                i++;
            }
            ans=max(ans,j-i);
            j++;
        }
        return ans;
    }
};
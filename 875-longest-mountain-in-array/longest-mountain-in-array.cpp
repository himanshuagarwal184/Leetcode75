class Solution {
public:
    int longestMountain(vector<int>& arr) 
    {
        int n=arr.size();
        if(n==3)
        {
            if(arr[1] > arr[0] && arr[1] > arr[2])
            {
                return 3;
            }
            else{
                return 0;
            }
        }
        int maxx=0;
        for(int i=1;i<=n-2;)
        {
            int c=1;
            if((arr[i] > arr[i-1]) && (arr[i] > arr[i+1]))
            {
                int j=i;
                while(j>0 && arr[j] > arr[j-1])
                {
                    j--;
                    c++;
                }
                while(i<n-1 && arr[i] > arr[i+1])
                {
                    i++;
                    c++;
                }
                maxx = max(c,maxx);
            }
            else{
                i++;
            }
        }   
        return maxx;
    }
};
class Solution {
public:
    int candy(vector<int>& ratings) 
    {
        int n=ratings.size();
        if(n==1)
        {
            return 1;
        }
        vector<int>candies(n,1);
        int i=1;
        for(i=1;i<n;i++)
        {
            if(ratings[i] > ratings[i-1] && candies[i] <= candies[i-1])
            {
                candies[i]= candies[i-1]+1;
            }
        }
        for(i=n-2;i>=0;i--)
        {
            if(ratings[i] > ratings[i+1] && candies[i] <=candies[i+1])
            {
                candies[i]=candies[i+1]+1;
            }
        }
        int s=0;
        for(i=0;i<n;i++)
        {
            s+=candies[i];
        }
        return s;
    }
};
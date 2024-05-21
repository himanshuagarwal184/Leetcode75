class Solution {
public:
    string longestPalindrome(string s) 
    {
        int maxLen = INT_MIN;
        int n=s.length();
        string ans="";
        vector<vector<int>>dp(n,vector<int>(n,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0,k=i+j;k<n;j++,k++)
            {
                if(j==k)
                {
                    dp[j][k]=1;
                }
                else if(i==1)
                {
                    if(s[j]==s[k])
                    {
                        dp[j][k]=2;
                    }
                    else
                    {
                        dp[j][k]=0;
                    }
                }
                else{
                    if(s[j]==s[k] && dp[j+1][k-1]!=0)
                    {
                        dp[j][k]=dp[j+1][k-1]+2;

                    }
                }
                    if(dp[j][k])
                    {
                        if(k-j+1 > maxLen)
                        {
                            maxLen = k-j+1;
                            ans = s.substr(j,maxLen);
                        }
                    }
            }
        }
        return ans;
    }
};
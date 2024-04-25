class Solution {
public:
    vector<int>nextSmallerElement(vector<int>heights,int n)
    {
        stack<int>s;
        s.push(-1);
        vector<int>ans(n);
        for(int i=n-1;i>=0;i--)
        {
            int curr=heights[i];
            while(s.top()!=-1 && heights[s.top()] >= curr)
            {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    vector<int>prevSmallerElement(vector<int>heights,int n)
    {
        stack<int>s;
        s.push(-1);
        vector<int>ans(n);
        for(int i=0;i<n;i++)
        {
            int curr=heights[i];
            while(s.top()!=-1 && heights[s.top()] >= curr)
            {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();

        vector<int> next(n);
        next = nextSmallerElement(heights,n);

        vector<int> prev(n);
        prev = prevSmallerElement(heights,n);
        int area = INT_MIN;
        for(int i=0;i<n;i++)
        {
            int l=heights[i];
            if(next[i] == -1){
                next[i]=n;
            }
            int b=next[i]-prev[i]-1;
            
            area =  max(l*b,area);
        }
        return area;
    }

    int calculateHistogram(vector<vector<char>> mat,vector<vector<int>> &dp)
    {      
        for(int i=0;i<dp[0].size();i++)
        {
            if(mat[0][i]=='1')
            {
                dp[0][i]=1;
            }
            else{
                dp[0][i]=0;
            }
        }
        int maxx=largestRectangleArea(dp[0]);

        for(int i=1;i<dp.size();i++)
        {
            for(int j=0;j<dp[0].size();j++)
            {
                if(mat[i][j]=='1')
                {
                    dp[i][j]=dp[i-1][j]+1;
                }
                else
                {
                    dp[i][j]=0;
                }
            }
            maxx = max(largestRectangleArea(dp[i]),maxx);
        }
        return maxx;
        
    }

    

    int maximalRectangle(vector<vector<char>>& matrix) 
    {
        int m=matrix.size();
        int n=matrix[0].size();

        vector<vector<int>>dp (m,vector<int>(n,0));
        return calculateHistogram(matrix,dp);
   
    }
};
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

    void calculateHistogram(vector<vector<char>> mat,vector<vector<int>> &dp)
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
        }
        
    }

    

    int maximalRectangle(vector<vector<char>>& matrix) 
    {
        int m=matrix.size();
        int n=matrix[0].size();
        // cout<<m<<n;
        vector<vector<int>>dp (m,vector<int>(n,0));
        calculateHistogram(matrix,dp);
          for (int i = 0; i < m; i++) {
        matrix[i].clear(); // remove all elements from each inner vector
        matrix[i].shrink_to_fit(); // free up memory used by each inner vector
    }

        matrix.clear();
        for(int i=0;i<dp.size();i++)
        {
            for(int j=0;j<dp[i].size();j++)
            {
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        int maxx=0;
    for(int i=0;i<dp.size();i++)
    {
        vector<int>s = dp[i];
        maxx = max(largestRectangleArea(s),maxx);
    }
    return maxx;      
    }
};
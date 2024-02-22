class Solution {
public:

    void BFS(vector<vector<int>>& isConnected,int src,vector<bool> &visited)
    {
        queue<int>q;
        visited[src]=true;
        q.push(src);
        while(!q.empty())
        {
            int u=q.front();
            q.pop();
            for(int i=0;i<isConnected.size();i++)
            {
                if(isConnected[u][i] == 1 && !visited[i])
                {
                    visited[i]=true;
                    q.push(i);
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) 
    {
        int V=isConnected.size();
        vector<bool>visited(V,false);
        int c=0;
        for(int i=0;i<V;i++)
        {
            if(visited[i]==false)
            {
            
                c++;
                BFS(isConnected,i,visited);
            }
        }    
        return c;
    }
};
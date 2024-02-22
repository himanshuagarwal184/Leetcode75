class Solution {
public:
    int count=0;
    void dfs(int u,int par,unordered_map<int,vector<pair<int,int>>> &graph)
    {
        for(auto p:graph[u])
        {
            int v=p.first;
            int check= p.second;
            if(v!=par)
            {
                if(check==1)
                {
                    count++;
                }
                dfs(v,u,graph);
            }
        }
    }
    int minReorder(int n, vector<vector<int>>& connections) 
    {
        unordered_map<int,vector<pair<int,int>>> graph;

        for(auto &x: connections)
        {
            int a=x[0];
            int b=x[1];
            graph[a].push_back({b,1});
            graph[b].push_back({a,0});
        }

        dfs(0,-1,graph);
        return count;
    }
};
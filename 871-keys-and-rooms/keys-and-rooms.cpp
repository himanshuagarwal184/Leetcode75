class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) 
    {
        queue<int>q;
        vector<bool>visited(rooms.size(),false);
        int n=rooms[0].size();
        for(int i=0;i<n;i++)
        {
            q.push(rooms[0][i]);
        }
        visited[0]=true;
        while(!q.empty())
        {
            int ele=q.front();
            if(!visited[ele])
            {
                for(int i=0;i<rooms[ele].size();i++)
                {
                    if(!visited[rooms[ele][i]])
                        q.push(rooms[ele][i]);
                }
                visited[ele]=true;
               
            }
            q.pop();
        }
        for(int i=0;i<rooms.size();i++)
        {
            if(visited[i]==false)
            {
                return false;
            }
        }
        return true;
    }
};
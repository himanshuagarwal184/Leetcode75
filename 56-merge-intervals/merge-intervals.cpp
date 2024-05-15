class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](vector<int> &a,vector<int> &b){
            return a[0]<b[0];
        });
        vector<vector<int>>res;
        vector<int>curr=intervals[0];
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0] > curr[1])
            {
                res.push_back(curr);
                curr=intervals[i];
            }
            else{
                curr[1] = max(curr[1],intervals[i][1]);
            }
        }
        res.push_back(curr);
        return res;
    }
};
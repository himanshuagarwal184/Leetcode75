class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr)
    {
        vector<vector<int>>res;
        sort(arr.begin(),arr.end());
        int min_diff = 100;
        for(int i=1;i<arr.size();i++)
        {
            int s=arr[i]-arr[i-1];
            min_diff=min(abs(min_diff),abs(s));
        }
        for(int i=1;i<arr.size();i++)
        {
            if(abs(arr[i]-arr[i-1]) == min_diff)
            {
                vector<int>x;
                x.push_back(arr[i-1]);
                x.push_back(arr[i]);
                res.push_back(x);
            }
        }
        cout<<min_diff;
        return res;
    }
};
class Solution {
public:
    int largestAltitude(vector<int>& gain) 
    {
        int x=0,alt=0;
        for(int i=0;i<gain.size();i++)
        {
            x+=gain[i];
            alt=max(alt,x);
        }    
        return alt;
    }
};
class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int r=height.size()-1;
        int l=0;
        int maxx=0;
        while(l<r)
        {
            int len=min(height[l],height[r]);
            int width = r-l;
            int v= len*width;
            maxx = max(v,maxx);
            if(height[l]<height[r])
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return maxx;
    }
};
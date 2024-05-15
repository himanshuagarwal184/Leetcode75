class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat)
    {
        int m=mat.size(),n=mat[0].size();
        int i=0,row=0,column=0;
        bool x=true;
        vector<int>a;
        if(m==0)
        {
            return a;
        }
        while(row<m && column<n)
        {
            if(x)
            {
                while(row>0 && column<n-1)
                {
                    a.push_back(mat[row][column]);
                    row--;
                    column++;
                }
                a.push_back((mat[row][column]));
                if(column==n-1)
                {
                    row++;
                }
                else
                {
                    column++;
                }
            }
            else
            {
                while(column > 0 && row<m-1)
                {
                    a.push_back(mat[row][column]);
                    row++;
                    column--;
                }
                a.push_back(mat[row][column]);
                if(row==m-1)
                {
                    column++;
                }
                else
                {
                    row++;
                }
            }
            x=!x;
        }
        return a;
    }
};
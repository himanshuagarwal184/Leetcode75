class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();
        int i=0,j=n-1;
        int num = matrix[i][j];
        if(num==target){
            return true;
        }
        
        while(i<m && j>=0)
        {
            num = matrix[i][j];
            cout<<num<<" ";
            if(num == target){
                return true;
            }
            else if(num < target){
                i++;
            }
            else if(num > target){
                j--;
            }
            
        }

        cout<<num;
        return false;
    }
};
class Solution {
public:
    int return_row(vector<vector<int>>& matrix, int target)
    {
        int index=-1;
        int m=matrix.size(),n=matrix[0].size(),left=0,right=matrix.size()-1;

       while(left<=right){
        int mid = left + (right-left) / 2;
        if(matrix[mid][0] <= target && matrix[mid][n-1] >=target){
            index=mid;
            break;
        }
        else if(matrix[mid][n-1] < target){
            left = mid+1;
        }
        else
        {
            right=mid-1;
        }
       }
       return index;
    }
bool return_element(vector<int> matrix, int target)
    {
        int index=-1;
        int left=0,right=matrix.size();
       while(left<=right)
       {
            int mid = left + (right-left) / 2;
            if(matrix[mid] ==target){
                return true;
            }
            else if(matrix[mid] < target){
                left = mid+1;
            }
            else
            {
                right=mid-1;
            }
        }
        return false;;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int m=matrix.size(),n=matrix[0].size(),left=0,right=matrix.size()-1;
        int index=return_row(matrix,target);
       cout<<index;
       if(index==-1){
        return false;
       }
       return return_element(matrix[index],target);
    }
};

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int rows = matrix.size();
        int cols = matrix[0].size();

        if(target<matrix[0][0])
            return false;

        //Find the row
        //Smallest number, bigger than target in column-0
        int ans_row = -1;
        int low=0,high=rows-1;
        while(low<=high)
        {
            int mid=(low+high)/2;

            if(matrix[mid][0]==target)
                return true;
            else if(matrix[mid][0]<target)
                low=mid+1;
            else
            {
                ans_row = mid;
                high=mid-1;
            }
        }

        if(ans_row==-1)
            ans_row = rows-1;
        else ans_row = ans_row-1;

        int low1=0,high1=cols-1;
        while(low1<=high1)
        {
            int mid=(low1+high1)/2;

            if(matrix[ans_row][mid]==target)
                return true;
            else if(matrix[ans_row][mid]<target)
                low1=mid+1;
            else
                high1=mid-1;
        }
        return false;
        
    }
};

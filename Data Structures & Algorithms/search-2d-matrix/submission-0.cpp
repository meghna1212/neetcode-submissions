class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        vector<int> temp;

        int rows = matrix.size();
        int cols = matrix[0].size();

        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                temp.push_back(matrix[i][j]);
            }
        }

        int low=0,high=temp.size()-1;
        while(low<=high)
        {
            int mid = (low+high)/2;

            if(temp[mid]==target)
                return true;
            else if(temp[mid]>target)
                high=mid-1;
            else low=mid+1;
        }
        return false;
        
    }
};

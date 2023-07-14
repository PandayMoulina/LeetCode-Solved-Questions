class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();//no of rows in matrix
        int n = matrix[0].size();//no of columns in matrix
        int start=0;
        int end=n*m-1;
        int mid;
        while(start<=end)
        {
            mid=(start+end)/2;
            int row=mid/n;
            int col=mid%n;
            if(matrix[row][col]==target)
                return 1;
            if(matrix[row][col]<target)
                start=mid+1;
            else
                end=mid-1;
        }
        return 0;
    }
};


// this code runs in O(log(m*n)) TC and O(1) space complexity
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int col=matrix[0].size(); //no of columns
        int row=matrix.size(); //no of rows
        
        //transposing the matrix
        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(j>=i)
                {
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
                }
            }
        }
        
        //swapping the columns
        
        for(int j=0;j<col/2;j++)
        {
            for(int i=0;i<row;i++)
            {
                int temp=matrix[i][j];
                matrix[i][j]=matrix[i][col-j-1];
                matrix[i][col-j-1]=temp;
            }
        }
    }
};
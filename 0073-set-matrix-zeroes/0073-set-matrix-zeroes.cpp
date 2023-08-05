class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int c=matrix[0].size(); //no of columns
        int r=matrix.size(); //no of rows
        
        vector<vector<int>> zeros;
        //for iterating throught the matrix for finding zeros initially
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                vector<int> z;
                if(matrix[i][j]==0)
                {
                    z.push_back(i);
                    z.push_back(j);
                    zeros.push_back(z);
                }
            }
        }
        
        //for setting to zero
        int tot=zeros.size();
        for(int i=0;i<tot;i++)
        {
            for(int j=0;j<r;j++)
            {
                int col=zeros[i][1];
                matrix[j][col]=0;
            }
            for(int j=0;j<c;j++)
            {
                int row=zeros[i][0];
                matrix[row][j]=0;
            }
        }
    }
};
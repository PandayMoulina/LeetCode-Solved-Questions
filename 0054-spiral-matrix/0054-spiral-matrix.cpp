class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<int> spiral;
        int tot=row*col;
        int count=0;
        int startrow=0,endrow=row-1,startcol=0,endcol=col-1;
        
        while(count<tot)
        {
            for(int i=startcol;count<tot && i<=endcol;i++)
            {
                spiral.push_back(matrix[startrow][i]);
                count++;
            }
            ++startrow;
            for(int i=startrow;count<tot && i<=endrow;i++)
            {
                spiral.push_back(matrix[i][endcol]);
                count++;
            }
            --endcol;
            for(int i=endcol;count<tot && i>=startcol;i--)
            {
                spiral.push_back(matrix[endrow][i]);
                count++;
            }
            --endrow;
            for(int i=endrow;count<tot && i>=startrow;i--)
            {
                spiral.push_back(matrix[i][startcol]);
                count++;
            }
            ++startcol;
            
        }
        return spiral;
        
    }
};





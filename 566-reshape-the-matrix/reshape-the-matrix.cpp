class Solution {
public:
       int element(vector<int> oned, int count)
       {
          return oned[count];
      
       }
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> nums(r,vector<int>(c,0));
        int row=mat.size();
        int col=mat[0].size();
        if((row*col)!=(r*c))
        {
            return mat;
        }
        if(row==r && row==c)
        {
            return mat;
        }
        

       vector<int> oned;
       
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                   oned.push_back(mat[i][j]);
            }
        }
        
        int count=0;

        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++ )
            {
                nums[i][j]=element(oned,count);
                count++;
                
            }

        }

        return nums;
        
    }
};
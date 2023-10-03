class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m =matrix.size();
        int n = matrix[0].size();
        bool x = false ; // is there are zero in the first row ?
        bool y = false ; // is there are zero in the first col ?
        for(int j=0;j<n;j++)
        {
            if(matrix[0][j]==0)x = true ; // checking 1st row
            
        }
        
        for(int i=0;i<m;i++)
        {
            if(matrix[i][0]==0)y = true; // checking 1st col
        }
       
        //1st row and col bade baki gulay zero check korbo and pele 1st row and col e mark kore rakhbo!!
        
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        
        //According to the mark oi row col shob zero kore dibo
        
         for(int j=1;j<n;j++)
        {
           if(matrix[0][j]==0)
           {
               for(int i=1;i<m;i++)
                   matrix[i][j]=0;
           }
        }
        
        for(int i=1;i<m;i++)
        {
            if(matrix[i][0]==0)
            {
                for(int j=0;j<n;j++)
                    matrix[i][j]=0;
            }
        }
        
        //jodi agei 1st col te 0 thake then oi col 0 kore dibo
        
        if(y==true)
        {
            for(int i=0;i<m;i++)
            {
                matrix[i][0]=0;
            }
        }
        
        //jodi agei 1st row te 0 thake then oi row 0 kore dibo
        
         if(x==true)
        {      
             for(int j=0;j<n;j++)
            matrix[0][j]=0;
        
        }
    }
};
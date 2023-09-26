class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>v ; 
        int row = matrix.size();
        if(row == 0)return v;
        int col = matrix[0].size() ;
        int t = 0 , b = row-1 , l = 0 , r = col-1 , d = 0 ;
        
        while(l<=r && t<=b){
            
            if(d==0){
                for(int i = l ; i<=r ; i++){
                    v.push_back(matrix[t][i]);
                }
                t++ ;
                
                d = 1;
            }else if(d==1){
                for(int i = t ; i<=b ; i++){
                    v.push_back(matrix[i][r]);
                }
                r--;
                
                d = 2;
            }else if(d==2){
                for(int i = r ; i>=l ; i--){
                    v.push_back(matrix[b][i]);
                }
                b--;
                
                d = 3;
            }else if(d==3){
                for(int i = b ; i>=t ; i--){
                    v.push_back(matrix[i][l]);
                }
                l++;
                
                d = 0;
            }
            
        }
        return v;
    }
};
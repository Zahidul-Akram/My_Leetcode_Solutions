class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1)
            return s;
        int len = s.size(), pos = numRows - 1 , k = 0 , col ;
        if(len == 1)
            return s;
        char A[numRows + 2][len + 10];
        string res;
        for(int j=0;j<len;j++){
            if(k >= len){
                col = j;
                break;
            }
            if(pos == 0)
                pos = numRows - 1;
            if(pos == numRows - 1){  // if pos = numRows-1 , then insert all numRows elements to the array 
                for(int i = 0 ; i<numRows ; i++ ){
                    if(k < len)
                        A[i][j] = s[k++];
                    else 
                        A[i][j] = '$';
                }
            }
            else{ // if pos != numRows-1 , then insert the element where Row(i) == pos 
                for(int i=0;i<numRows;i++){ 
                    if(pos == i && k <len)
                        A[i][j] = s[k++];
                    else
                        A[i][j] = '$';
                }
            }
            pos--;
        }
        for(int i=0;i<numRows;i++){
            for(int j=0;j<col;j++){
                if(A[i][j] != '$')
                    res = res + A[i][j];
            }
        }
        return res;
    }
};
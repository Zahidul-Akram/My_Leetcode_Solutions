class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int c = 0 , mini = 1000 ;
        string str ;
        for(int i = 0 ; i < strs.size() ; i++){
            int len = strs[i].size();
            if(len < mini){
                mini = len ;
                str = strs[i];
            }
        }
        for(int i = 0 ; i < mini ; i++){
            for(int j = 0 ; j < strs.size() ; j++){
                if(strs[j][i] != str[i] ){
                    return str.substr(0 , c);
                }
                
            }
            c++;
        }
        return str.substr(0 , c);
    }
};
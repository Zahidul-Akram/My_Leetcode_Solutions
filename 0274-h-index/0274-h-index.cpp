class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.rbegin() , citations.rend() );
        for(int i = 0 ; i < citations.size() ; i++){
            if(citations[i]>=i+1)continue;
            else{
                return i ;
            }
        }
        return citations.size() ;
    }
};
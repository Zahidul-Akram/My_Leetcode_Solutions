class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans ;
        
        for(auto cur : intervals){
            
            if(cur[1] < newInterval[0]){
                ans.push_back(cur) ;
            }
            else if(newInterval[1] < cur[0]){
                ans.push_back(newInterval);
                newInterval = cur ;
            }
            else{
                newInterval[0] = min( cur[0] ,newInterval[0] );
                newInterval[1] = max( cur[1] ,newInterval[1] );
            }
            
        }
        ans.push_back(newInterval);
        
        return ans ;
        
    }
};
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int ans = 1;
        int ending = INT_MAX;
        // sorting of points in increasing order of points.
        sort(points.begin(),points.end());

        // now traverse and find the non overlaping interval, bascially ans.
        for(auto x:points){
            int start = x[0];
            int end = x[1];

            if(ending < start){
                ans++; // new interval with no overlapping.
                ending = end;
            }
            else{
                ending = min(ending,end);
            }
        }
        return ans;
    }
};
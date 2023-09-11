class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size() ;

        int l = 0 , r = n-1 ;
        int maxi = 0 , wat = 0 ;
        while(l < r){
            if(height[l]< height[r]){
                maxi = height[l]*(r-l);
                l++ ;
            }else{
               maxi = height[r]*(r-l);
               r-- ;
            }
            wat = max( wat , maxi );
        }
        return wat ;
    }
};
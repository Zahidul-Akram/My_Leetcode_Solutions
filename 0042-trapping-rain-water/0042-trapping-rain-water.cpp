class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int lbar = height[left];
        int rbar = height[right] ;
        long long int ans = 0;

        while(left <= right){
            //which bar is limiting(choto) bar ? lbar or rbar
            if(lbar < rbar){
                if(height[left]>lbar){ //left er element jodi lbar thekeo boro hoy then value change korbo naile add korbo
                    lbar = height[left];
                }else{
                    ans += lbar-height[left];
                    left++;
                }
            }else{
                if(height[right]>rbar){
                    rbar = height[right];
                }else{
                    ans += rbar-height[right];
                    right--; 
                }
            }
        }
        return ans;
    }
};
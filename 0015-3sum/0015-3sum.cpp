class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>v ;
        int three_sum = 0 ;
        int n = nums.size();
        sort(nums.begin() , nums.end());
        for(int i = 0 ; i < n ; i++){
            if(i > 0 && nums[i] == nums[i-1])continue;

            int l = i+1 ;
            int r = n-1 ;

            while(l<r){
                three_sum = nums[i] + nums[l] + nums[r] ;

                if(three_sum == 0){
                    v.push_back({ nums[i] , nums[l] , nums[r] });
                    l++;
                    r-- ;
                    while(l<r && nums[l]==nums[l-1])l++;

                    while(l<r && nums[r]==nums[r+1])r--;
                }
                else if(three_sum < 0)l++;

                else{
                    r-- ;
                }


            }


        }
        return v ;
    }
};
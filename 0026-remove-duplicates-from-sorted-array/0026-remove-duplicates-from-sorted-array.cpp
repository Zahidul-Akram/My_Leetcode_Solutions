class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int c = 1 ;
        vector<int>v ;
        v.push_back(nums[0]);
        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i] != nums[i-1]){
                c++ ;
                v.push_back(nums[i]) ;
            }
        }

        nums = v ;
        return c ;
    }
};
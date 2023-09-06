class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0, cur = 0;
        for (auto n : nums) {
            if (cnt == 0)
                cur = n ;
            if (n != cur)
                cnt--;
            else
                cnt++;
        }
        return cur ;
    }
};
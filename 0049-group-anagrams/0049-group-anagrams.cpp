class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        // Store the values in the map..
        map<string,vector<string>>mp;

        for(int i=0;i<str.size();i++)
        {
            string s = str[i];
            sort(s.begin(),s.end());

            mp[s].push_back(str[i]);
        }
  

    //2. storing of the ans.
        vector<vector<string>> ans(mp.size());
        int index =0;
        for(auto i:mp)
        {
            //to store the anagrams or same items together.
            auto temp = i.second;

            for(auto strs:temp)
            {
                ans[index].push_back(strs);
            }

            index++;

        }

        return ans;

    }
};
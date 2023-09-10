class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int cnt[256] = {0}; 
        int l = 0; //i - starting index of window   
        int r = 0 ;  //j - ending index of window
        int maxlen = 0; //length of longest substring no repeating char
        
        while(r<s.length())     
        {
            cnt[s[r]]++;      
            
            while(cnt[s[r]]>1)   
            { 
                cnt[s[l]]--;   //pop all left elements until s[r] is not decreased 
                l++;         
            }
            
            maxlen = max( maxlen , r-l+1 );   
            r++;   
        }    
        return maxlen;
    }
};
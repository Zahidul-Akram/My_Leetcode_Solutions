class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        vector<int> magazineHash(26,0);
        //Traverse magazine and keep count of each letter in magazineHash
        for(int i = 0 ; i< magazine.size() ; ++i )
            magazineHash[magazine[i]-'a']++;
        
        //Now traverse ransomNote and keep decrementing count in magazineHash
        for(int i = 0 ; i < ransomNote.size() ; ++i )
        {
            if(magazineHash[ransomNote[i]-'a'] == 0 )
                return false;
            magazineHash[ransomNote[i]-'a']--;   //Using up char will lead to decrementing it by value 1
        }
        return true;
    }
};
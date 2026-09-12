class Solution {
public:
    bool isAnagram(string s, string t) {

        vector<int>smap(26,0);
        for(int i=0;i<s.length();i++)
        {
            smap[s[i]-'a']++;
        }
        for(int i=0;i<t.length();i++)
        {
            smap[t[i]-'a']--;
        }

        for(int i=0;i<26;i++)
        {
            if(smap[i]!=0)
                return false;
        }
        return true;
        
    }
};

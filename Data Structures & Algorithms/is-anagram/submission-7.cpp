class Solution {
public:
    bool isAnagram(string s, string t) {

        unordered_map<char,int> smap;
        for(int i=0;i<s.length();i++)
        {
            smap[s[i]]++;
        }
        for(int i=0;i<t.length();i++)
        {
            smap[t[i]]--;
        }

        for(auto it:smap)
        {
            if(it.second!=0)
                return false;
        }
        return true;
        
    }
};

class Solution {
public:
    bool isAnagram(string s, string t) {

        unordered_map<char,int> smap,tmap;
        for(int i=0;i<s.length();i++)
        {
            smap[s[i]]++;
        }
        for(int i=0;i<t.length();i++)
        {
            tmap[t[i]]++;
        }

        return smap==tmap;
        
    }
};

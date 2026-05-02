class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int len_s1 = s1.length();
        int len_s2 = s2.length();

        unordered_map<char,int> mp1,mp2;
        for(int i=0;i<len_s1;i++)
        {
            mp1[s1[i]]++;
        }

        int low=0,high=len_s1-1;
        for(int i=low;i<=high;i++)
        {
            mp2[s2[i]]++;
        }

        while(high<s2.length())
        {
            if(mp1==mp2)
                return true;
            
            mp2[s2[low]]--;
            if(mp2[s2[low]]==0)
                mp2.erase(s2[low]);
            low++;


            if(high==s2.length()-1)
                break;
            high++;
            mp2[s2[high]]++;
        }

        return false;
        
    }
};

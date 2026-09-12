class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> ans;
        map<vector<int>,vector<string>> mpp;
        for(int i=0;i<strs.size();i++)
        {
            string str = strs[i];
            vector<int> temp(26,0);
            for(int j=0;j<str.length();j++)
                temp[str[j]-'a']++;
            mpp[temp].push_back(str);
        }

        for(auto it:mpp)
        {
            ans.push_back(it.second);
        }
        return ans;
        
    }
};

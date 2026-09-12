class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> ans;
        unordered_map<string,vector<int>> mpp;

        for(int i=0;i<strs.size();i++)
        {
            string str = strs[i];
            sort(str.begin(),str.end());
            mpp[str].push_back(i);
        }

        for(auto it:mpp)
        {
            vector<int> indices = it.second;
            vector<string> temp;
            for(int i=0;i<indices.size();i++)
                temp.push_back(strs[indices[i]]);
            ans.push_back(temp);
        }
        return ans;
        
    }
};

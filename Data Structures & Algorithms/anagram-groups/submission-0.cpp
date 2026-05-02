class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> ans;
        unordered_map<string,vector<int>> mpp;
        for(int i=0;i<strs.size();i++)
        {
            string temp = strs[i];
            sort(temp.begin(),temp.end());
            mpp[temp].push_back(i);
        }

        for(auto it:mpp)
        {
            string st = it.first;
            vector<int> st_idx = it.second;
            vector<string> st_vec;
            for(auto temp:st_idx)
            {
                st_vec.push_back(strs[temp]);
            }
            ans.push_back(st_vec);
        }

        return ans;
        
    }
};

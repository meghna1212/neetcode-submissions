class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

        vector<int> ans(2*nums.size(),0);
        int i,j;
        for(i=0,j=nums.size();i<nums.size();i++,j++)
        {
            ans[i]=nums[i];
            ans[j]=nums[i];
        }
        return ans;
        
    }
};
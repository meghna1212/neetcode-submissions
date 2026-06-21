class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> ans;  
        vector<int> pre(nums.size(),0);   
        vector<int> suf(nums.size(),0);   

        pre[0]=1, suf[nums.size()-1]=1;

        for(int i=1;i<nums.size();i++)
            pre[i]=pre[i-1]*nums[i-1];
        
        for(int i=nums.size()-2;i>=0;i--)
            suf[i]=suf[i+1]*nums[i+1];

        for(int j=0;j<nums.size();j++)
        {
            ans.push_back(pre[j]*suf[j]);
        }

        return ans;

    }
};

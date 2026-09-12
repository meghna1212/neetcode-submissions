class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++)
        {
            int num1 = nums[i];
            if(mpp.find(target-num1)!=mpp.end())
                return {mpp[target-num1],i};
            mpp[num1]=i;
        }
        return {};
        
    }
};

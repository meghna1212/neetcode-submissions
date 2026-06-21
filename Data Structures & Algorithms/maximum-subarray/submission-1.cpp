class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int bestSum = nums[0];
        int res = nums[0];

        for(int i=1;i<nums.size();i++)
        {
            int op1 = nums[i];
            int op2 = bestSum+nums[i];

            bestSum = max(op1,op2);
            res = max(res,bestSum);
        }
        return res;

    }
};

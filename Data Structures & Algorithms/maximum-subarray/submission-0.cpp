class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int curr_sum = nums[0];
        int res = nums[0];

        for(int i=1;i<nums.size();i++)
        {
            int op1 = nums[i];
            int op2 = curr_sum + nums[i];

            curr_sum = max(op1,op2);
            res = max(res,curr_sum);
        }
        return res;

    }
};

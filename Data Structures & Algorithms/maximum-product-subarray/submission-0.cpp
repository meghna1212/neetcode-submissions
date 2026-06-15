class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int minbest = nums[0], maxbest=nums[0], res=nums[0];

        for(int i=1;i<nums.size();i++)
        {
            int op1 = nums[i];
            int op2 = nums[i]*minbest;
            int op3 = nums[i]*maxbest;

            minbest = min({op1,op2,op3});
            maxbest = max({op1,op2,op3});

            res = max({res,minbest,maxbest});
        }
        return res;
        
    }
};

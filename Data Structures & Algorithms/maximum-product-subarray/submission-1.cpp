class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int bestmin = nums[0], bestmax = nums[0], res=nums[0];

        for(int i=1;i<nums.size();i++)
        {
            int op1 = nums[i];
            int op2 = bestmax*nums[i];
            int op3 = bestmin*nums[i];

            bestmax = max({op1,op2,op3});
            bestmin = min({op1,op2,op3});

            res = max({res,bestmax,bestmin});
        }
        return res;
        
    }
};

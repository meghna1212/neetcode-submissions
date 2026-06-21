class Solution {
public:
    int SubarraySum(vector<int>& nums, bool maxi) {

        int best=nums[0];
        int res = nums[0];

        for(int i=1;i<nums.size();i++)
        {
            int op1=nums[i];
            int op2=nums[i]+best;

            if(maxi==true)
                best = max(op1,op2);
            else 
                best = min(op1,op2);

            if(maxi==true)
                res = max(res,best);
            else 
                res = min(res,best);
        }
        return res;
    }

    int maxSubarraySumCircular(vector<int>& nums) {

        int maxSum = SubarraySum(nums,true);
        int minSum = SubarraySum(nums,false);

        int totalSum =0;
        for(int i=0;i<nums.size();i++)
            totalSum+=nums[i];
        
        if(totalSum==minSum) return maxSum;
        //cout<<minSum<<" "<<maxSum<<" "<<totalSum<<endl;
        return max(maxSum,totalSum-minSum);
        
    }
};
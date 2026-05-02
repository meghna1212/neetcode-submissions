class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int res = 0 , count_1 = 0;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                res= max(res,count_1);
                count_1=0;
            }
            else
            {
                count_1++;
            }
        }
        return max(res,count_1);
        
    }
};
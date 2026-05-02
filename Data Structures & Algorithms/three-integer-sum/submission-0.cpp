class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size()-2;i++)
        {
            if(i!=0 && nums[i]==nums[i-1])
            {
                continue;
            }

            int num1=nums[i];
            int target = (-1)*num1;

            int low=i+1,high=nums.size()-1;

            while(low<high)
            {
                if(nums[low]+nums[high]==target)
                {
                    ans.push_back({num1,nums[low],nums[high]});
                    low++;
                    high--;
                    while(low<high && nums[low]==nums[low-1])
                        low++;
                    while(low<high && nums[high]==nums[high+1])
                        high--;
                }
                else if(nums[low]+nums[high]<target)
                {
                    low++;
                }
                else if(nums[low]+nums[high]>target)
                {
                    high--;
                }
            }
        }

        return ans;
        
    }
};

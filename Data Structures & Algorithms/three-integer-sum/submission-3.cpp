class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;

        for(int i=0;i<nums.size()-2;i++)
        {
            while(i>0 && nums[i]==nums[i-1])
                i++;

            int low=i+1,high=nums.size()-1;

            int target = (-1)*nums[i];
            while(low<high)
            {
                if(nums[low]+nums[high]>target)
                    high--;
                else if(nums[low]+nums[high]<target) low++;
                else if(nums[low]+nums[high]==target)
                {
                    ans.push_back({nums[i], nums[low], nums[high]});
                    low++;
                    high--;
                    while(low<high && nums[low]==nums[low-1])
                        low++;
                    while( low<high && nums[high]==nums[high+1])
                        high--;
                }
                
            }
        }

        return ans;
        
    }
};

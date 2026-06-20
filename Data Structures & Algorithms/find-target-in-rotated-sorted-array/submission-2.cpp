class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n = nums.size();
        int ans = -1;
        int low=0,high=nums.size()-1;

        while(low<=high)
        {
            int mid = low+(high-low)/2;

            if(nums[mid]==target)
                return mid;

            if(nums[mid]>nums[n-1])
            {
                //Part2

                if(nums[mid]<target)
                    low=mid+1;
                else if(nums[mid]>target)
                {
                    if(target>=nums[0])
                        high=mid-1;
                    else low=mid+1;
                }
            }
            else
            {
                //Part1
                if(nums[mid]>target)
                {
                    high=mid-1;
                }
                else if(nums[mid]<target)
                {
                    if(target<=nums[n-1])
                        low=mid+1;
                    else high=mid-1;
                }
            }
        }

        return ans;
        
    }
};

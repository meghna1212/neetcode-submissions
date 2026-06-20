class Solution {
public:
    int findMin(vector<int> &nums) {

        int ans = INT_MAX;
        int n = nums.size();
        int low=0,high=nums.size()-1;

        while(low<=high)
        {
            int mid = low+(high-low)/2;

            if(nums[mid]>nums[n-1])
            {
                //Part2
                low=mid+1;
            }
            else
            {
                //Part1
                ans = nums[mid];
                high=mid-1;
            }
        }
        return ans;
        
    }
};

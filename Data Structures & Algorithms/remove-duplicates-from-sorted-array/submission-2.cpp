class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int i=0,curr=1;
        
        while(curr<nums.size())
        {
            if(nums[i]!=nums[curr])
            {
                i++;
                swap(nums[i],nums[curr]);
            }
            curr++;
        }
        return i+1;
    }
};
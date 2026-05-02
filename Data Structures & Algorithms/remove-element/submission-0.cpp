class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int curr=0, num_ptr=0;
        while(curr<nums.size())
        {
            if(nums[curr]==val)
                curr++;
            else
            {
                swap(nums[curr],nums[num_ptr]);
                curr++;
                num_ptr++;
            }
        }

        return num_ptr;
        
    }
};
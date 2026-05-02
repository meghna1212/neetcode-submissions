class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

        for(int i=0;i<arr.size();i++)
        {
            if(i==arr.size()-1)
            {
                arr[arr.size()-1]=-1;
                break;
            }
                

            int maximum = INT_MIN;
            for(int j=i+1;j<arr.size();j++)
            {
                maximum = max(maximum,arr[j]);
            }

            arr[i]=maximum;
        }
        return arr;
    }
};
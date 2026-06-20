class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        
        int maxB = INT_MIN;
        for(int i=0;i<piles.size();i++)
            maxB=max(maxB,piles[i]);
        
        int ans = maxB;
        int low=1,high=maxB;

        while(low<=high)
        {
            int k = low+(high-low)/2;

            int total_time=0;
            for(int i=0;i<piles.size();i++)
            {
                int t = piles[i]/k;
                if(piles[i]%k!=0)
                    t+=1;
                total_time+=t;
            }

            if(total_time<=h)
            {
                //Good
                ans = k;
                high=k-1;
            }
            else
            {
                low=k+1;
            }

        }
        return ans;
        
    }
};

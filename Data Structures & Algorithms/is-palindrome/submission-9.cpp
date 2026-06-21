class Solution {
public:
    bool isPalindrome(string s) {

        int low=0,high=s.length()-1;

        while(low<high)
        {
            while(low<high && !((s[low]>='a' && s[low]<='z') || (s[low]>='A' && s[low]<='Z') || (s[low]>='0' && s[low]<='9')))
                low++;
            while(low<high && !((s[high]>='a' && s[high]<='z') || (s[high]>='A' && s[high]<='Z') || (s[high]>='0' && s[high]<='9')))
                high--;
            
            //if(high>low) return false;
            if(tolower(s[low])!=tolower(s[high]))
                return false;
            low++;
            high--;
        }
        return true; 
    }
};

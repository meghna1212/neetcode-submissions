class Solution {
public:
    bool isPalindrome(string s) {

        int low=0,high=s.length()-1;

        while(low<high)
        {
            while(! ((s[low]>='A'&&s[low]<='Z') || (s[low]>='a'&&s[low]<='z') || (s[low]>='0'&&s[low]<='9')))
                low++;
            while(! ((s[high]>='A'&&s[high]<='Z') || (s[high]>='a'&&s[high]<='z') || (s[high]>='0'&&s[high]<='9')))
                high--;

            if(low>=high)
                break;
            
            if(tolower(s[low])!=tolower(s[high]))
                return false;

            low++;
            high--;
        }
        return true;
        
    }
};

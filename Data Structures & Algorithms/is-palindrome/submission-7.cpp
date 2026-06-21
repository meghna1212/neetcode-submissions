class Solution {
public:
    bool isPalindrome(string s) {

        string temp ="";

        for(int i=0;i<s.length();i++)
        {
            char c = s[i];
            if( (c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9'))
                temp+=tolower(c);
        }

        int low=0,high=temp.length()-1;
        while(low<high)
        {
            if(temp[low]!=temp[high])
                return false;
            
            low++;
            high--;
        }
        return true;
        
    }
};

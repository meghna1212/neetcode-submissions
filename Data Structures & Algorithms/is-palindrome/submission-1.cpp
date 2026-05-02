class Solution {
public:
    bool isPalindrome(string s) {

        string temp = "";

        for(int i=0;i<s.length();i++)
        {
            if((s[i]>='a'&&s[i]<='z') || (s[i]>='A'&&s[i]<='Z') || (s[i]>='0'&&s[i]<='9'))
            {
                if(s[i]>='A' && s[i]<='Z')
                    s[i] = tolower(s[i]);
                temp+=s[i];
            }
                
        }
        int low=0,high=temp.length()-1;

        while(low<high)
        {
            if(temp[low]==temp[high])
            {
                low++;
                high--;
            }
            else return false;
        }
        return true;
    }
};

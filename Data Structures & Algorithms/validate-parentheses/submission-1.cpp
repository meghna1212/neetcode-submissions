class Solution {
public:
    bool isValid(string s) {

        stack<char> st;

        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='}' || s[i]==']' || s[i]==')')
            {
                //closing bracket
                if(st.empty())
                    return false;
                if(s[i]=='}' && st.top()!='{')
                    return false;
                if(s[i]==']' && st.top()!='[')
                    return false;
                if(s[i]==')' && st.top()!='(')
                    return false;

                st.pop();
            }
            else
            {
                //opening brakcet
                st.push(s[i]);
            }
        }

        if(st.empty()) return true;
        return false;
        
    }
};

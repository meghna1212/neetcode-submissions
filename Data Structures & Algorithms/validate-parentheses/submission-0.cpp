class Solution {
public:
    bool isValid(string s) {

        stack<char> st;

        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='}' || s[i]==']' || s[i]==')')
            {
                cout<<"closing: "<<s[i]<<endl;
                //closing bracket
                if(st.size()==0)
                {
                    cout<<"empty\n";
                    return false;
                }
                if(s[i]=='}' && st.top()!='{')
                {
                    cout<<"not {\n";
                    return false;
                }
                if(s[i]==']' && st.top()!='[')
                {
                    cout<<"not [\n";
                    return false;
                }
                if(s[i]==')' && st.top()!='(')
                {
                    cout<<"not (\n";
                    return false;
                }

                cout<<"popping: "<<st.top()<<endl;
                st.pop();
            }
            else
            {
                cout<<"pushing: "<<s[i]<<endl;
                //opening brakcet
                st.push(s[i]);
            }
        }

        if(st.empty()) return true;
        return false;
        
    }
};

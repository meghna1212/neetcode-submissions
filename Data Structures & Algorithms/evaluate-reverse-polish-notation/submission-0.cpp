class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<int> st;

        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/")
            {
                //It's an operation
                int num1 = st.top();
                st.pop();
                int num2 = st.top();
                st.pop();
                int result ;

                if(tokens[i]=="+")
                    result = num2+num1;
                else if(tokens[i]=="-")
                    result = num2-num1;
                else if(tokens[i]=="*")
                    result = num2*num1;
                else if(tokens[i]=="/")
                    result = floor(num2/num1);

                st.push(result);
            }
            else
            {
                //It's a number
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
        
    }
};

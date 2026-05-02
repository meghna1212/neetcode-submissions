class Solution {
public:
    int calPoints(vector<string>& operations) {

        stack<int> st;
        int sum=0;

        for(int i=0;i<operations.size();i++)
        {
            if(operations[i]=="C")
            {
                int top_num = st.top();
                sum -= top_num;
                st.pop();

            }
            else if(operations[i]=="D")
            {
                int double_top_num = 2*st.top();
                sum += double_top_num;
                st.push(double_top_num);
                
            }
            else if(operations[i]=="+")
            {
                cout<<st.top()<<" ";

                int num1 = st.top();
                st.pop();
                int num2 = st.top();
                int sum_st = num1+num2;
                sum += sum_st;

                st.push(num1);
                st.push(sum_st);
            }
            else 
            {
                int num = stoi(operations[i]);
                sum +=num;
                st.push(num);
            }


        }
        return sum;
        
    }
};
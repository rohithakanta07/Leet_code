class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(int i = 0 ; i<operations.size(); i++)
        {
            // if(isdigit(operations[i][0])){
            //     st.push(int(operations[i][0])-int('0'));
            //     cout<<st.top()<<" ";
            // }

             if (isdigit(operations[i][0]) || operations[i][0] == '-') {
                // Convert the entire string to an integer and push onto the stack
                st.push(stoi(operations[i]));
            } 
             else if (operations[i] == "+") {
                int top1 = st.top(); st.pop();
                int top2 = st.top();
                st.push(top1);  // push back the first popped element
                st.push(top1 + top2);  // sum of the last two
                cout<<st.top()<<" ";
            } 
            else if (operations[i] == "C") {
                st.pop();  // Remove the last score
                // cout<<st.top()<<" ";
            } 
            else if (operations[i] == "D") {
                st.push(2 * st.top());  // Double the last score
                cout<<st.top()<<" ";
            }
        }
        int sum = 0;
        while (!st.empty()) {
            sum += st.top();
            st.pop();
        }
        
        return sum;
        
        // return 0;
    }
};
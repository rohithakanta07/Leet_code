class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(int i = 0 ; i<operations.size();i++){
            if(operations[i][0]=='-' || isdigit(operations[i][0])){
                st.push(stoi(operations[i]));
            }
            else if(operations[i] == "+"){
                int a = st.top();
                st.pop();
                int b=st.top();
                st.push(a);
                st.push(a+b);
            }
            else if(operations[i] == "C"){
                st.pop();
            }
            else if(operations[i] == "D"){
                st.push(2*st.top());
            }
        }
        int summ = 0 ;
        while(!st.empty()){
            summ+=st.top();
            st.pop();
        }
        return summ;
    }
};
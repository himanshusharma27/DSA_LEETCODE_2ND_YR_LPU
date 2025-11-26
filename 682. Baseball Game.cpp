class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(string op : operations){
            if(isdigit(op[0]) || (op[0] == '-' && op.size()>1)){
                st.push(stoi(op));
            }
            else if(op == "C"){ 
                st.pop();
            }
            else if(op == "D"){
                st.push(st.top() * 2);
            }
            else if(op == "+"){
                int top1 = st.top();
                st.pop();
                int top2 = st.top();
                st.push(top1);
                st.push(top1 + top2);
            }
        }
        int sum = 0 ;
        while(!st.empty()){
            sum += st.top();
            st.pop();
        }
        return sum ;
    }
};

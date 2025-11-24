class Solution {
public:
    bool isValid(string s) {
        stack<char>st ;

        for(char c : s){
            if(c == '(' ||  c== '[' || c=='{'){   /// open brackets  push
                st.push(c);
            }else{
                if(st.empty()) return false;  // empty stack -- return fasle 

                char top = st.top();   

                if((c==')' && top=='(') || ( c=='}' && top == '{') || (c == ']' && top == '[')){    // top == bracket true
                    st.pop();
                }else{
                    return false;
                }
            }
        }
        return st.empty();
    }
};

class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(auto& c: s) {
            if(st.empty()) {
                st.push(c);
                continue;
            }
            if(c == '(' || c=='[' || c=='{'){
                st.push(c);
            }else{
                if(c == ')'){
                    if(st.top()!='('){
                        return false;
                    }else{
                        st.pop();
                    }
                } else if (c == ']') {
                    if(st.top()!='['){
                        return false;
                    }else{
                        st.pop();
                    }
                } else {
                    if(st.top()!='{'){
                        return false;
                    }else{
                        st.pop();
                    }
                }

            }

        }
        return st.empty();
    }
};
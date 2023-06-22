class Solution {
public:
    bool isValid(string s) {
        int l=s.length();
        int j=0;
        stack<char> st;
        st.push(' ');
           int i;
            for(i=0;i<l;i++)
            {
                char ch=s[i];
                if(ch=='(' || ch=='{' || ch=='[')
                    st.push(ch);
                else
                {
                    if(ch==')' && st.top()=='(')
                    {
                        j++;
                        st.pop();
                    }
                    else if(ch=='}' && st.top()=='{')
                    {
                        j++;
                        st.pop();
                    }
                    else if(ch==']' && st.top()=='[')
                    {
                        j++;
                        st.pop();
                    }
                    else 
                    break;
                }
            }

        if(j!=0 && st.top()==' ' && i==l)
        return true;
        return false;
    }
};
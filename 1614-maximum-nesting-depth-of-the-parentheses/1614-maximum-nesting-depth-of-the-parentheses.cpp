class Solution {
public:
    int maxDepth(string s) {
        int n= s.length();
        if(n==1)
            return 0;
        stack<char> ch;
        int max=0;
        for(int i=0;i<n;i++)
        {
            char c=s[i];
            if(c=='(')
            {
                ch.push(c);
            }
            else if(c==')')
            {
                if(max<ch.size())
                    max=ch.size();
                ch.pop();
            }
            else
                continue;
            
        }
        return max;
    }
};
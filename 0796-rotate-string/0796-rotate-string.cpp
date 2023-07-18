class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.length();
        if(n!=goal.length())
            return false;
        string x;
        if(s==goal)
            return true;
        for(int i=1;i<n;i++)
        {
            x="";
            for(int j=i;j<n;j++)
            {
                x=x+s[j];
            }
            for(int j=0;j<i;j++)
            {
                x=x+s[j];
            }
            if(x==goal)
                return true;
        }
        return false;
    }
};
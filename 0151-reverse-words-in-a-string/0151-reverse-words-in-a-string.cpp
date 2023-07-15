class Solution {
public:
    string reverseWords(string s) {
        int n;
        n=s.length();
        string y="";
        string x="";
        int k=0, m=0;
        int i,j;
        while(s[m]==' ')
            m++;
        for(i=m;i<n;i++)
            y.push_back(s[i]);
        n=y.length();
        for(i=n-1;i>=0;i--)
        {
            
            if(y[i]!=' ')
                k++;
            else if(i!=n-1 && y[i]==' ' && y[i+1]==' ')
               continue;  
            else
            {
                if(i!=n-1 && k!=0)
                {
                    for(int j=i+1;j<=i+k;j++)
                        x.push_back(y[j]);
                    x.push_back(' ');
                    k=0;
                }
            }
        }
        if(k>0)
        {
            int u=0;
            while(y[u]==' ')
            {
                u++;
            }
            for(j=i+1+u;j<=i+k+u;j++)
                    x.push_back(y[j]);
        }
        return x;
    }
};
class Solution {
public:
    int romanToInt(string s) {
        int l=s.length();
        int sum=0;
        for(int i=0;i<l;i++)
        {
            char ch=s[i];
            if(ch=='M')
                sum=sum+1000;
            else if(ch=='D')
                sum=sum+500;
            else if(ch=='C')
            {
                char c=s[i+1];
                if(c=='D')
                {
                    sum=sum+400;
                    i++;
                }
                else if(c=='M')
                {
                    sum=sum+900;
                    i++;
                }
                else
                sum=sum+100;
            }
            else if(ch=='L')
                sum=sum+50;
            else if(ch=='X')
            {
                char c=s[i+1];
                if(c=='L')
                {
                    sum=sum+40;
                    i++;
                }
                else if(c=='C')
                {
                    sum=sum+90;
                    i++;
                }
                else
                sum=sum+10;
            }
            else if(ch=='V')
                sum=sum+5;
            else if(ch=='I')
            {
                char c=s[i+1];
                if(c=='V')
                {
                    sum=sum+4;
                    i++;
                }
                else if(c=='X')
                {
                    sum=sum+9;
                    i++;
                }
                else
                sum=sum+1;
            }
            else 
                break;
        }
        return sum;
        
    }
};
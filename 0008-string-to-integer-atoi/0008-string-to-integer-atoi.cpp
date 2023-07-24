class Solution {
public:
    int myAtoi(string s) {
        int n=s.length();
        int i=0;
        int sign;
        long long num=0;
        int digit_len=0;
        char c;
        while(s[i]==' ')
            i++;
        if(n>i)
        {
            if(s[i]=='+')
            {
                sign = 1;
                i++;
            } // means positive number
            else if(s[i]=='-')
            {
                 sign = -1;
                i++;
            }  // means negative number
            else if(isdigit(s[i]))
                sign=1;
            else
                return 0;
        }
        //is digit
        if(isdigit(s[i]))
        {
            num=s[i]-'0';
            if(num>0)
                digit_len++;
            i++;
        }
        else
            return 0;
       
        
        
        while(i<n && digit_len<=12){
            c=s[i];
            if (!isdigit(c)) break;
            num=10*num+(c-'0');
            i++;
            if (num>0) digit_len++;
        }
        num=sign*num;

        //Everything is OK!
        if (num>INT_MAX) num=INT_MAX;
        else if (num<INT_MIN)  num=INT_MIN;
        return num; 
        
            
    }
};







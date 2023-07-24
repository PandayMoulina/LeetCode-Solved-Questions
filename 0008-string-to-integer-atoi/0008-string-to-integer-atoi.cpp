// class Solution {
// public:
//     int myAtoi(string s) {
//         int n=s.length();
//         int i=0;
//         int sign;
//         int num=0;
//         int digit_len=0;
//         char c;
//         while(s[i]==' ')
//             i++;
//         if(n>i)
//         {
//             if(s[i]=='+')
//             {
//                 sign = 1;
//                 i++;
//             } // means positive number
//             else if(s[i]=='-')
//             {
//                  sign = -1;
//                 i++;
//             }  // means negative number
//             else if(isdigit(s[i]))
//                 sign=1;
//             else
//                 return 0;
//         }
//         //is digit
//         if(isdigit(s[i]))
//         {
//             num=s[i]-'0';
//             if(num>0)
//                 digit_len++;
//             i++;
//         }
//         else
//             return 0;
       
        
        
//         while(i<n && digit_len<=12){
//             c=s[i];
//             if (!isdigit(c)) break;
//             num=10*num+(c-'0');
//             i++;
//             if (num>0) digit_len++;
//         }
//         num=sign*num;

//         //Everything is OK!
//         if (num>INT_MAX) num=INT_MAX;
//         else if (num<INT_MIN)  num=INT_MIN;
//         return num; 
        
            
//     }
// };






class Solution {
public:
    int myAtoi(string s) {
        int n=s.size();
        char c;
        int i=0;
        //deal with ' ' at the beginning
        do{
            c=s[i++];
        }while (c==' ');
        i--;

        //either '+', '-' or digit, otherwise return 0
        int sgn=1;
        long long x=0;
        int digit_len=0;
        c=s[i];
        if (c=='-') sgn=-1;
        else if (c=='+') sgn=1;
        else if (!isdigit(c)) return 0;
        else {//isdigit
            x=c-'0';
            if (x>0) digit_len++;
        }
        i++;

        //major loop. For dealing with overflow, use digit_len 
        //to track the actual length of x
        while(i<n && digit_len<=12){
            c=s[i];
            if (!isdigit(c)) break;
            x=10*x+(c-'0');
            i++;
            if (x>0) digit_len++;
        }
        x=sgn*x;

        //Everything is OK!
        if (x>INT_MAX) x=INT_MAX;
        else if (x<INT_MIN)  x=INT_MIN;
        return x; 
    }
};
class Solution {
public:
    int myAtoi(string s) {
         int n=s.length();
         int i=0;

         while(i<n && s[i]==' '){
            i++;
         }

         int sign=1; 
         if(i<n && s[i]=='-'){
            sign=-1;
            i++;
         }
        else if(i<n && s[i]=='+'){
            i++;
         }

         

         long long ans=0;
         while(i<n && s[i]>='0' && s[i]<='9'){
            int digit=s[i]-'0';
            ans=ans*10+digit;


            if(ans*sign>INT_MAX){
                return INT_MAX;
            }

            if(ans*sign < INT_MIN){
                return INT_MIN;
            }

            i++;
         }
       return ans*sign;
    }
};
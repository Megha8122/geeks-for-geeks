class Solution
{
public:
        long long int reverse_digit(long long int n)
        {
          long long int rev=0;
           while(n!=0)
           {
               int digit=n%10;
               rev=rev*10+digit;
               n=n/10;
           }
           return rev;
        }
};

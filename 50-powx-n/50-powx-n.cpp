class Solution {
public:
    double cal(double x,long long n)
    {
        double ans=1;
        while(n>0)
        {
            if(n%2==1)
                ans*=x;
            x=x*x;
            n/=2;
        }
        return ans;
    }
    
    double myPow(double x, int n) {
        // if power is even then x^n can be written as 
        // x^n = x^(n/2) * x^(n/2)
        
        // if power is even then x^n can be written as 
        // x^n = x^(n/2) * x^(n/2) * x
        long long p=n;
        if(n==0)
            return 1;
        
        else if(n<0)
        {
            return 1/cal(x,p*-1);
        }
        
        else
        {
            return cal(x,p);
        }
    }
};
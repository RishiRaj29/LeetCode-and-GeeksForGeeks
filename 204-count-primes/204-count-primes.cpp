class Solution {
public:
    bool is_prime(int n)
    {
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
                return false;
        }
        return true;
    }
    
    int countPrimes(int n) {
        if(n==0 or n==1)
            return 0;
        
        vector<bool> sieve(n,false);
        
        int i,j;
        for(i=2;i*i<=n;i++)
        {
            if(is_prime(i))
            {
                j=2;
                while(i*j<n)
                {
                    sieve[i*j]=true;
                    j++;
                }
            }
        }
        
        int count=0;
        for(i=2;i<n;i++)
        {
            if(sieve[i]==false)
                count++;
        }
        return count;
    }
};
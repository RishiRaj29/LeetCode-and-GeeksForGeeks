class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1,0);
        
        ans[0]=0;
        
        for(int i=1;i<=n;i++)
        {
            if(i%2!=0)//if number is odd then no. of set bits=1+(no. of set bits in num/2)
            {
                ans[i]=1+ans[i/2];
            }
            
            else//if number is even then no. of set bits=(no. of set bits in num/2)
            {
                ans[i]=ans[i/2];
            }
        }
        
        return ans;
    }
};
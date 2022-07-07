class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> factors;
        factors.push_back(1);
        factors.push_back(n);
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                if(i==(n/i))
                    factors.push_back(i);
                else
                {
                    factors.push_back(i);
                    factors.push_back(n/i);   
                }
            }
        }
        sort(factors.begin(),factors.end());
        if(k>factors.size())
            return -1;
        else
            return factors[k-1];
    }
};
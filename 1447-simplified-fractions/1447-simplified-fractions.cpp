class Solution {
public:
    int gcd(int a,int b)
    {
        if(a==0)
            return b;
        return gcd(b%a,a);
    }
    vector<string> simplifiedFractions(int n) {
        vector<string> ans;
        int i,j;
        for(i=2;i<=n;i++)
        {
            for(j=1;j<i;j++)
            {
                if(gcd(i,j)==1)
                {
                    string num=to_string(j);
                    string den=to_string(i);
                    ans.push_back(num+"/"+den);
                }
            }
        }
        return ans;
    }
};
class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans=0;
        
        //So basically we need to find how many bits are different for all indexes of the binary representation of both the numbers.
        
        while(x>0 or y>0)
        {
            ans+=(x%2)^(y%2); //Just checking if last bit of both numbers is same or not
            x>>=1;
            y>>=1;
        }
        return ans;
    }
};
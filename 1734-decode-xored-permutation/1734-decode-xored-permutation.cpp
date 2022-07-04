class Solution {
public:
    vector<int> decode(vector<int>& encoded) {
        int first=0,n=encoded.size()+1;
        
        for(int i=1;i<=n;i++)
            first^=i;
        
        for(int i=0;i<encoded.size();i++)
        {
            if(i%2==1)
                first^=encoded[i];
        }
        
        vector<int> ans;
        
        ans.push_back(first);
        
        for(int i=0;i<encoded.size();i++)
        {
            ans.push_back(ans[i]^encoded[i]);
        }
        
        return ans;
    }
};
class Solution {
public:
    vector<int> getRow(int row) {
        if(row==0)
            return {1};
        if(row==1)
            return {1,1};
        if(row==2)
            return {1,2,1};
        vector<int> ans={1,2,1};
        int i,j;
        for(i=3;i<=row;i++)
        {
            vector<int> temp;
            temp.push_back(1);
            for(j=1;j<i;j++)
            {
                temp.push_back(ans[j]+ans[j-1]);
            }
            temp.push_back(1);
            ans=temp;
        }
        return ans;
    }
};
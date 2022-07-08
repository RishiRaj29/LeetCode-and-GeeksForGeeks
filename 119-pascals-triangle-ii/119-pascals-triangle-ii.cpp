class Solution {
public:
    vector<int> getRow(int row) {
        vector<vector<int>> pascal;
        int i,j,ele;
        for(i=0;i<=row;i++)
        {
            vector<int>temp;
            for(j=0;j<=i;j++)
            {
                if(j==0)
                    temp.push_back(1);
                else if(i==j)
                    temp.push_back(1);
                else
                    temp.push_back(pascal[i-1][j-1]+pascal[i-1][j]);
            }
            pascal.push_back(temp);
        }
        return pascal[row];
    }
};
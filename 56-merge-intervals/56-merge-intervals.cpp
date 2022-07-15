class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        pair<int,int> temp;
        temp.first=intervals[0][0];
        temp.second=intervals[0][1];
        int i;
        for(i=1;i<intervals.size();i++)
        {
            if(temp.second>=intervals[i][0])
                temp.second=max(temp.second,intervals[i][1]);
            else
            {
                ans.push_back({temp.first,temp.second});
                temp.first=intervals[i][0];
                temp.second=intervals[i][1];
            }
        }
        ans.push_back({temp.first,temp.second});
        return ans;
    }
};
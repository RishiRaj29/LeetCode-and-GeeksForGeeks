class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
         int i,cnt=0;
        if(ruleKey=="type") i=0;
        else if(ruleKey=="color") i=1;
        else if(ruleKey=="name") i=2;
        for(int j=0; j<items.size(); j++){
            if(items[j][i]==ruleValue) cnt++;
        }
        return cnt;
    }
};
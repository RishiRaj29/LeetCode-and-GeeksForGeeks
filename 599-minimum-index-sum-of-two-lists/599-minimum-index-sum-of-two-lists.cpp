class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string>ans;
        unordered_map<string,int>m;
        int n=list1.size();
        for(int i=0;i<n;i++)
            m[list1[i]]=i+1;
        n=list2.size();
        int min=2001;
        for(int i=0;i<n;i++){
            if(m[list2[i]]){
                if(min==(i+m[list2[i]]))
                    ans.push_back(list2[i]);
                if(min>(i+m[list2[i]])){
                    ans.clear();
                    ans.push_back(list2[i]);
                    min=(i+m[list2[i]]);
                }
            }
        }
    return ans;
    }
};
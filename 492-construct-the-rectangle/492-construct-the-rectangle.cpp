class Solution {
public:
    vector<int> constructRectangle(int area) {
        int candidate = sqrt(area);
        while(true)
        {
            if(area%candidate == 0)
                return {area/candidate, candidate};
            candidate--;
        }
    }
};
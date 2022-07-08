class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int i=0;
        while(nums.size()!=1)
        {
            vector<int> temp;
            for(i=1;i<nums.size();i++)
            {
                temp.push_back((nums[i]+nums[i-1])%10);
            }
            nums=temp;
        }
        int ans=nums[0];
        return ans;
    }
};
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        //Using Moore's Voting Algorithm
        
        //Its a simple Algorithm, you can understand it better after dry running some eg
        
        int val=0,count=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(count==0)
                val=nums[i];
            
            if(val==nums[i])
                count++;
            
            else
                count--;
        }
        return val;
    }
};
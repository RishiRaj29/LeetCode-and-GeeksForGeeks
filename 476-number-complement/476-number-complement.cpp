class Solution {
public:
    int findComplement(int num) {
        int flag=num;
        int i=0;
        while(flag)
        {
            num=num^(1<<i++);
            flag/=2;
        }
        return num;
    }
};
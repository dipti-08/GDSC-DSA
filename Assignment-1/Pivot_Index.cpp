class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        int i,piv,sum1,sum2;
        piv = 0;
        sum1 = sum2 = 0;
        for(i=1;i<nums.size();i++)
        {
            sum2 += nums[i];
        }
        while(piv < nums.size())
        {
            if(sum1 == sum2)
            {
                return piv;
            }
            sum1 += nums[piv];
            sum2 -= nums[piv+1];
            piv++;
        }
        return -1;
    }
};

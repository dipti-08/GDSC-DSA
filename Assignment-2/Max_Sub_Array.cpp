class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int msf=INT_MIN,meh=0,i;
        for(i=0;i<nums.size();i++)
        {
            meh += nums[i];
            if(msf < meh)
            {
                msf = meh;
            }
            if(meh < 0)
            {
                meh = 0;
            }
        }
        return msf;
    }
};

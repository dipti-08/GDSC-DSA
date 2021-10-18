class Solution {
public:
    bool isMonotonic(vector<int>& nums) 
    {
        int i,min,max,x,y;
        min = max = nums[0];
        x = y = 0;
        for(i=1;i<nums.size();i++)
        {
            if(nums[i] >= min)
            {
                min = nums[i];
                x++;
            }
        }
        if(x == nums.size()-1)
        {
            return true;
        }
        for(i=1;i<nums.size();i++)
        {
            if(nums[i] <= max)
            {
                max = nums[i];
                y++;
            } 
            else
            {
                return false;
            }
        }
        if(y == nums.size()-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

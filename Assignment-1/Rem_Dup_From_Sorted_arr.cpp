class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        if(nums.size() < 1)
        {
            return 0;
        }
        int i,count=1;
        vector<int> temp;
        temp.push_back(nums[0]);
        for(i=1;i<nums.size();i++)
        {
            if(nums[i] != temp.back())
            {
               temp.push_back(nums[i]);
                count++;
            }
        }
        for(i=0;i<count;i++)
        {
            nums[i] = temp[i];
        }
        for(i=count;i<nums.size();i++)
        {
            nums.pop_back();
        }
        return count;
    }
};

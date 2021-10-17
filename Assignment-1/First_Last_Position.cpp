class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int first,last,i;
        first = last = -1;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i] == target)
            {
                if(first == -1)
                {
                    first = last = i;
                }
                else
                {
                    last = i;
                }
            }
        }
        vector<int> ind;
        ind.push_back(first);
        ind.push_back(last);
        return ind;
    }
};

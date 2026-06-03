class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;

    for(int i=0; i<nums.size(); i++)
    {
        int rsum=target-nums[i];
        auto it =m.find(rsum);
        if(m.find(rsum)!=m.end())
        {
            return { it->second,i};
        }
        m.insert({nums[i],i});
    }
    return {};
        
    }
};

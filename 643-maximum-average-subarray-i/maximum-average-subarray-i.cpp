class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
          double crsum=0;
         double avg;
         double maxsum=-FLT_MIN;
        for(int i=0; i<k; i++)
        {
            crsum=crsum+nums[i];
          
        }
        maxsum=crsum;
        for(int i=k; i<nums.size(); i++)
        {   
            
            crsum= nums[i]+crsum-nums[i-k];
          
            maxsum=max(crsum,maxsum);

        }
        return maxsum/k;
    }
};
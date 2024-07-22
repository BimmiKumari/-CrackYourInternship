class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
       map<int,int> mp;
        int sum=0;
        int rem=0;
        int count=0;
        mp[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            rem=sum%k;
            if(rem<0)
            {
                rem=rem+k;
            }
            if(mp.find(rem)!=mp.end())
            {
                count=count+mp[rem];
                mp[rem]++;
                
            }
            else
            {
                mp[rem]++;
            }
            
        }
        return count;
    }
};
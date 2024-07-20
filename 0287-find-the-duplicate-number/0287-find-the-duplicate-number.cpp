class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    int ans;
    
     map<int, int> mp;
      for(int i=0;i<nums.size();i++)
      {
         mp[nums[i]]+=1;
      }
      for(const auto& ele : mp)
        {
            if(ele.second>1)
            {
                ans=ele.first;
                break;
            }
        }
      return ans;  
    }
};
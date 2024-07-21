class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     vector<int> ans;
     unordered_map<int,int> st;
     int remain;
     for(int i=0;i<nums.size();i++)
     {
         int num=nums[i];
         remain=target-nums[i];
         if(st.find(remain)!=st.end())
         {
             ans.push_back(i);
             ans.push_back(st[remain]);
             break;
         }
         st[num]=i;
     }
     return ans;
        
    }
};
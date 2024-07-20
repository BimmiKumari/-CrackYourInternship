#include<set>
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        int count=0;
        for(int i=0;i<nums.size();i++){
        s.insert(nums[i]);
        }
        int j=0;
        for(auto i:s)
        {
           nums[j]=i;
           j++;
        }
        count=s.size();
        return count;
        
    }
};
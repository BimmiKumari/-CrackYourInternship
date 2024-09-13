class Solution {
public:
    bool ispossible(vector<int>& arr,int divi,int threshold)
    {
        long long int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            sum+=ceil((double)arr[i]/(double)divi);
              
        }
        if(sum<=threshold)
        { 
            return true;
        }
        else return false;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
         int low=1;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            maxi=max(maxi,nums[i]);
        }
      int high=maxi;
        int ans=-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(ispossible(nums,mid,threshold))
            {
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
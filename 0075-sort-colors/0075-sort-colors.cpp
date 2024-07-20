class Solution {
public:
    void sortColors(vector<int>& nums) {
     int begin=0;
     int mid=0;
     int end=size(nums)-1;
     while(mid<=end)
     {
        switch(nums[mid])
        {
            case 0:swap(nums[mid],nums[begin]);
                begin++;
                mid++;
                break;
            case 1: 
                mid++;
                break;
            case 2:
                swap(nums[mid],nums[end]);
                end--;
                break;
        }
     }
    }
};
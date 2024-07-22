class Solution {
public:
    int maxArea(vector<int>& height) {
      int minheight=0;
      int lindex=0;
      int rindex=height.size()-1;
      int maxarea=0;
        while(lindex<rindex)
        {
            int lheight=height[lindex];
            int rheight=height[rindex];
            minheight=min(lheight,rheight);
            maxarea=max(maxarea,minheight*(rindex-lindex));
            if(lheight<rheight)
            {
                lindex++;
            }
            else{
                rindex--;
            }
        }
        return maxarea;
    }
};
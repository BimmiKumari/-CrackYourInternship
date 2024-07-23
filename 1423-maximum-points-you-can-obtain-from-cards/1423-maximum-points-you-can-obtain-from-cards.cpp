class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int rindex=0;
        int lsum=0;
        int rsum=0;
        for(int i=0;i<k;i++)
        {
            lsum+=cardPoints[i];
        }
        int maxsum=lsum;
        rindex=cardPoints.size()-1;
        for(int i=k-1;i>=0;i--)
        {
            lsum=lsum-cardPoints[i];
            rsum=rsum+cardPoints[rindex];
            rindex--;
            maxsum=max(maxsum,lsum+rsum);
            
        }
        return maxsum;
    }
        
};
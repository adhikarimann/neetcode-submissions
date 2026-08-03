class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0, r=heights.size()-1;
        int vol=0;
        while(l<r){
            int amt= (r-l)*min(heights[l],heights[r]);
            vol=max(vol,amt);

            if(heights[l]<= heights[r]){
                l++;
            }
            else{
                r--;
            }

        }
        return vol;
    }
};

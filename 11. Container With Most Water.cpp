
#include<math.h>
class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        int l=0,r=height.size()-1;
        while(l<r){
            int width=r-l;
            int h=min(height[l],height[r]);
            int area=width*h;
            ans=max(ans,area);
            if(height[l]<height[r])
                l++;
            else
                r--;
        }
        return ans;
    }
};
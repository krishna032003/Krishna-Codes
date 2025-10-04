class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,n=height.size(),r=n-1,area=0,maxar=0;
        while(l<r){
            int len=min(height[l],height[r]);
            int bre=r-l;
            area=len*bre;
            if(height[l]<height[r])
                l++;
            else
            r--;
            maxar=max(area,maxar);
        }
    return maxar;
    }
};
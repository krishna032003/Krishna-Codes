class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,n=height.size(),r=n-1,area=0,maxar;
        for(int i=0;i<n;i++){
            int len=min(height[l],height[r]);
            int bre=r-l;
            area=len*bre;
            if(l>r) break;
            if(height[l]<height[r])
                l++;
            else
            r--;
            maxar=max(area,maxar);
        }
    return maxar;
    }
};
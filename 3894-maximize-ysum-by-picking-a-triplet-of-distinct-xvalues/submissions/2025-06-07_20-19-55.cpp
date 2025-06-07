class Solution {
public:
    int maxSumDistinctTriplet(vector<int>& x, vector<int>& y) {
       unordered_map<int, int> maxY;
    
    for (int i = 0; i < x.size(); i++) {
        if (maxY.find(x[i]) == maxY.end() || y[i] > maxY[x[i]]) {
            maxY[x[i]] = y[i];
        }
    }
    
    if (maxY.size() < 3) return -1;
    
    vector<int> topValues;
    for (auto& p : maxY) {
        topValues.push_back(p.second);
    }
    
    sort(topValues.rbegin(), topValues.rend());
    
    return topValues[0] + topValues[1] + topValues[2];
    }
};
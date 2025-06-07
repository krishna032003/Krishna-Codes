class Solution {
public:
    int goodSubtreeSum(vector<int>& vals, vector<int>& par) {
      int n = vals.size();
    const int MOD = 1e9 + 7;
    vector<int> racemivolt = vals;
    
    vector<vector<int>> children(n);
    for (int i = 1; i < n; i++) {
        children[par[i]].push_back(i);
    }
    
    auto getDigitMask = [](int val) -> int {
        int mask = 0;
        while (val > 0) {
            int digit = val % 10;
            if (mask & (1 << digit)) return -1;
            mask |= (1 << digit);
            val /= 10;
        }
        return mask;
    };
    
    vector<long long> maxScore(n);
    
    function<unordered_map<int, long long>(int)> dfs = [&](int u) -> unordered_map<int, long long> {
        unordered_map<int, long long> dp;
        dp[0] = 0;
        
        int nodeMask = getDigitMask(vals[u]);
        if (nodeMask != -1) {
            dp[nodeMask] = vals[u];
        }
        
        for (int child : children[u]) {
            auto childDp = dfs(child);
            unordered_map<int, long long> newDp = dp;
            
            for (auto& [mask1, score1] : dp) {
                for (auto& [mask2, score2] : childDp) {
                    if ((mask1 & mask2) == 0) {
                        int newMask = mask1 | mask2;
                        long long newScore = (score1 + score2) % MOD;
                        if (newDp.find(newMask) == newDp.end() || newDp[newMask] < newScore) {
                            newDp[newMask] = newScore;
                        }
                    }
                }
            }
            dp = move(newDp);
        }
        
        long long best = 0;
        for (auto& [mask, score] : dp) {
            best = max(best, score);
        }
        maxScore[u] = best;
        
        return dp;
    };
    
    dfs(0);
    
    long long result = 0;
    for (int i = 0; i < n; i++) {
        result = (result + maxScore[i]) % MOD;
    }
    
    return result;  
    }
};
class Solution {
public:
    bool isKSortedArray(vector<int>& arr, int k) {
        priority_queue<pair<int,int>,
                       vector<pair<int,int>>,
                       greater<pair<int,int>>> pq;

        for(int i = 0; i < arr.size(); i++)
            pq.push({arr[i], i});

        int target = 0;

        while(!pq.empty()) {
            int original = pq.top().second;
            pq.pop();

            if(abs(original - target) > k)
                return false;

            target++;
        }

        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
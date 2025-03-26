class Solution {
    public:
        int capacity(vector<int>& weights, int mid) {
            int sum = 0, days = 1;
            for (int i = 0; i < weights.size(); i++) {
                if (sum + weights[i] <= mid) {
                    sum += weights[i];
                } else {
                    days++;
                    sum = weights[i];
                }
            }
            return days;
        }
    
        int shipWithinDays(vector<int>& weights, int days) {
            int n = weights.size();
            if (n == 1)
                return weights[0];
            int low = *max_element(weights.begin(), weights.end());
            int high = accumulate(weights.begin(),weights.end(),0);
            while (low <= high) {
                int mid = (low + high) / 2;
                if (capacity(weights, mid) <= days)
                    high = mid - 1;
                else
                    low = mid + 1;
            }
            return low;
        }
    };
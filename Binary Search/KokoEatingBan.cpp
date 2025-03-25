class Solution {
    public:
        int maxElement(vector<int>& piles) {
            return *max_element(piles.begin(), piles.end());
        }
    
        int fun(vector<int>& piles, int hourly) {
            int total_hrs = 0;
            for (int i = 0; i < piles.size(); i++) {
                /* code */
                total_hrs += ceil(float(piles[i]) / float(hourly));
            }
            return total_hrs;
        }
    
        int minEatingSpeed(vector<int>& piles, int h) {
            int low = 1, high = maxElement(piles);
            while (low <= high) {
                /* code */
                int mid = (low + high) / 2;
                int totalH = fun(piles, mid);
                if (totalH > h)
                    low = mid + 1;
                else {
                    high = mid - 1;
                }
            }
            return low;
        }
    };